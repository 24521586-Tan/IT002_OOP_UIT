#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc sp1, sp2;

    cout << "Nhap so phuc thu nhat:\n";
    sp1.Nhap();
    cout << "So phuc 1: ";
    sp1.Xuat();

    cout << "\nNhap so phuc thu hai:\n";
    sp2.Nhap();
    cout << "So phuc 2: ";
    sp2.Xuat();

    cout << "\nTong: ";
    sp1.Tong(sp2).Xuat();

    cout << "Hieu: ";
    sp1.Hieu(sp2).Xuat();

    cout << "Tich: ";
    sp1.Tich(sp2).Xuat();

    cout << "Thuong: ";
    sp1.Thuong(sp2).Xuat();

    return 0;
}
