#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
    PhanSo ps1, ps2;

    cout << "Nhap phan so thu nhat:\n";
    ps1.Nhap();
    ps1.RutGon();
    cout << "Phan so thu nhat (rut gon): ";
    ps1.Xuat();

    cout << "\nNhap phan so thu hai:\n";
    ps2.Nhap();
    ps2.RutGon();
    cout << "Phan so thu hai (rut gon): ";
    ps2.Xuat();

    cout << "\nTong: ";
    ps1.Tong(ps2).Xuat();

    cout << "Hieu: ";
    ps1.Hieu(ps2).Xuat();

    cout << "Tich: ";
    ps1.Tich(ps2).Xuat();

    cout << "Thuong: ";
    ps1.Thuong(ps2).Xuat();

    int ss = ps1.SoSanh(ps2);
    if (ss > 0)
        cout << "Phan so thu nhat > Phan so thu hai\n";
    else if (ss < 0)
        cout << "Phan so thu nhat < Phan so thu hai\n";
    else
        cout << "Hai phan so bang nhau\n";

    return 0;
}
