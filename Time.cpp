#include <iostream>
#include "Time.h"
using namespace std;

ThoiGian::ThoiGian() {
    iGio = 0;
    iPhut = 0;
    iGiay = 0;
}

ThoiGian::ThoiGian(int gio, int phut, int giay) {
    iGio = (gio >= 0 && gio <= 23) ? gio : 0;
    iPhut = (phut >= 0 && phut <= 59) ? phut : 0;
    iGiay = (giay >= 0 && giay <= 59) ? giay : 0;
}

void ThoiGian::Nhap() {
    do {
        cout << "Nhap gio (0-23): ";
        cin >> iGio;
    } while (iGio < 0 || iGio > 23);

    do {
        cout << "Nhap phut (0-59): ";
        cin >> iPhut;
    } while (iPhut < 0 || iPhut > 59);

    do {
        cout << "Nhap giay (0-59): ";
        cin >> iGiay;
    } while (iGiay < 0 || iGiay > 59);
}

void ThoiGian::Xuat() const {
    cout << (iGio < 10 ? "0" : "") << iGio << ":"
         << (iPhut < 10 ? "0" : "") << iPhut << ":"
         << (iGiay < 10 ? "0" : "") << iGiay << endl;
}

void ThoiGian::TinhCongThemMotGiay() {
    iGiay++;
    if (iGiay > 59) {
        iGiay = 0;
        iPhut++;
        if (iPhut > 59) {
            iPhut = 0;
            iGio++;
            if (iGio > 23) {
                iGio = 0;
            }
        }
    }
}
