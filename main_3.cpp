#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    ThoiGian tg;

    cout << "Nhap thoi gian:\n";
    tg.Nhap();

    cout << "\nThoi gian ban dau: ";
    tg.Xuat();

    tg.TinhCongThemMotGiay();

    cout << "Sau khi cong them 1 giay: ";
    tg.Xuat();

    return 0;
}
