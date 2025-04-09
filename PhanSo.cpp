#include <iostream>
#include "PhanSo.h"
using namespace std;

PhanSo::PhanSo() {
    iTu = 0;
    iMau = 1;
}

PhanSo::PhanSo(int tu, int mau) {
    iTu = tu;
    iMau = (mau == 0) ? 1 : mau;
}

void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> iTu;
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> iMau;
    } while (iMau == 0);
}

void PhanSo::Xuat() const {
    cout << iTu << "/" << iMau << endl;
}

int PhanSo::UCLN(int a, int b) const {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void PhanSo::RutGon() {
    int gcd = UCLN(abs(iTu), abs(iMau));
    iTu /= gcd;
    iMau /= gcd;
    if (iMau < 0) { // Chuyển dấu về tử số
        iTu = -iTu;
        iMau = -iMau;
    }
}

PhanSo PhanSo::Tong(const PhanSo& ps) const {
    int tuMoi = iTu * ps.iMau + ps.iTu * iMau;
    int mauMoi = iMau * ps.iMau;
    PhanSo kq(tuMoi, mauMoi);
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(const PhanSo& ps) const {
    int tuMoi = iTu * ps.iMau - ps.iTu * iMau;
    int mauMoi = iMau * ps.iMau;
    PhanSo kq(tuMoi, mauMoi);
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(const PhanSo& ps) const {
    PhanSo kq(iTu * ps.iTu, iMau * ps.iMau);
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong(const PhanSo& ps) const {
    if (ps.iTu == 0) {
        cout << "Loi: Khong the chia cho phan so co tu = 0.\n";
        return PhanSo();
    }
    PhanSo kq(iTu * ps.iMau, iMau * ps.iTu);
    kq.RutGon();
    return kq;
}

int PhanSo::SoSanh(const PhanSo& ps) const {
    int a = iTu * ps.iMau;
    int b = ps.iTu * iMau;
    if (a > b) return 1;
    else if (a < b) return -1;
    return 0;
}
