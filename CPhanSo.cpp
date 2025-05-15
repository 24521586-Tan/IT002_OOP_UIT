#include <bits/stdc++.h>
using namespace std;

class CPhanSo {
private:
    int tu, mau;

public:
    CPhanSo();
    CPhanSo(int tu, int mau);

    friend istream& operator>>(istream& is, CPhanSo& ps);
    friend ostream& operator<<(ostream& os, const CPhanSo& ps);

    CPhanSo operator+(const CPhanSo& ps) const;
    CPhanSo operator-(const CPhanSo& ps) const;
    CPhanSo operator*(const CPhanSo& ps) const;
    CPhanSo operator/(const CPhanSo& ps) const;

    bool operator==(const CPhanSo& ps) const;
    bool operator!=(const CPhanSo& ps) const;

    void rutGon();
};

int UCLN(int a, int b) {
    return b == 0 ? abs(a) : UCLN(b, a % b);
}

void CPhanSo::rutGon() {
    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
    int k = UCLN(tu, mau);
    tu /= k;
    mau /= k;
}

CPhanSo::CPhanSo() : tu(0), mau(1) {}

CPhanSo::CPhanSo(int tu, int mau) {
    this->tu = tu;
    this->mau = mau;
    if (this->mau == 0) {
        cout << "Mau so khong the bang 0. Dat lai thanh 1." << endl;
        this->mau = 1;
    }
}

istream& operator>>(istream& is, CPhanSo& ps) {
    cout << "Nhap tu so: ";
    is >> ps.tu;
    do {
        cout << "Nhap mau so (khac 0): ";
        is >> ps.mau;
        if (ps.mau == 0)
            cout << "Mau so khong hop le. Nhap lai.\n";
    } while (ps.mau == 0);
    return is;
}

ostream& operator<<(ostream& os, const CPhanSo& ps) {
    if (ps.mau == 1)
        os << ps.tu;
    else
        os << ps.tu << "/" << ps.mau;
    return os;
}

CPhanSo CPhanSo::operator+(const CPhanSo& ps) const {
    CPhanSo kq(tu * ps.mau + mau * ps.tu, mau * ps.mau);
    kq.rutGon();
    return kq;
}

CPhanSo CPhanSo::operator-(const CPhanSo& ps) const {
    CPhanSo kq(tu * ps.mau - mau * ps.tu, mau * ps.mau);
    kq.rutGon();
    return kq;
}

CPhanSo CPhanSo::operator*(const CPhanSo& ps) const {
    CPhanSo kq(tu * ps.tu, mau * ps.mau);
    kq.rutGon();
    return kq;
}

CPhanSo CPhanSo::operator/(const CPhanSo& ps) const {
    CPhanSo kq(tu * ps.mau, mau * ps.tu);
    kq.rutGon();
    return kq;
}

bool CPhanSo::operator==(const CPhanSo& ps) const {
    return (long long)tu * ps.mau == (long long)ps.tu * mau;
}

bool CPhanSo::operator!=(const CPhanSo& ps) const {
    return !(*this == ps);
}

int main() {
    CPhanSo ps1, ps2;

    cout << "Nhap phan so thu nhat:\n";
    cin >> ps1;

    cout << "Nhap phan so thu hai:\n";
    cin >> ps2;

    CPhanSo tong = ps1 + ps2;
    CPhanSo hieu = ps1 - ps2;
    CPhanSo tich = ps1 * ps2;
    CPhanSo thuong = ps1 / ps2;

    cout << "\nTong: " << tong << endl;
    cout << "Hieu: " << hieu << endl;
    cout << "Tich: " << tich << endl;
    cout << "Thuong: " << thuong << endl;

    if (ps1 == ps2)
        cout << "Hai phan so bang nhau." << endl;
    if (ps1 != ps2)
        cout << "Hai phan so khong bang nhau." << endl;

    return 0;
}
