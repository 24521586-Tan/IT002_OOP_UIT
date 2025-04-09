#include <iostream>
#include "SoPhuc.h"
using namespace std;

SoPhuc::SoPhuc() {
    iThuc = 0;
    iAo = 0;
}

SoPhuc::SoPhuc(double thuc, double ao) {
    iThuc = thuc;
    iAo = ao;
}

void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

void SoPhuc::Xuat() const {
    if (iAo >= 0)
        cout << iThuc << " + " << iAo << "i" << endl;
    else
        cout << iThuc << " - " << -iAo << "i" << endl;
}

SoPhuc SoPhuc::Tong(const SoPhuc& sp) const {
    return SoPhuc(iThuc + sp.iThuc, iAo + sp.iAo);
}

SoPhuc SoPhuc::Hieu(const SoPhuc& sp) const {
    return SoPhuc(iThuc - sp.iThuc, iAo - sp.iAo);
}

SoPhuc SoPhuc::Tich(const SoPhuc& sp) const {
    double thuc = iThuc * sp.iThuc - iAo * sp.iAo;
    double ao = iThuc * sp.iAo + iAo * sp.iThuc;
    return SoPhuc(thuc, ao);
}

SoPhuc SoPhuc::Thuong(const SoPhuc& sp) const {
    double mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;
    if (mau == 0) {
        cout << "Loi: Khong the chia cho so phuc co ca thuc va ao bang 0.\n";
        return SoPhuc();
    }
    double thuc = (iThuc * sp.iThuc + iAo * sp.iAo) / mau;
    double ao = (iAo * sp.iThuc - iThuc * sp.iAo) / mau;
    return SoPhuc(thuc, ao);
}
