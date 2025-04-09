//file NgayThangNam.cpp
#include "NgayThangNam.h"
#include <bits/stdc++.h>
using namespace std;

void NgayThangNam::Nhap()
{
    cout << "Nhap ngay thang nam: ";
    cin >> iNgay >> iThang >> iNam;
}

void NgayThangNam::Xuat()
{
    cout << "Ngay thang nam hien tai: " << endl;
    cout << iNgay << "/" << iThang << "/" << iNam << endl;
}

void NgayThangNam::NgayThangNamTiepTheo()
    {
        cout << "Ngay tiep theo: " << endl;
        if(iThang==12)
        {
            if(iNgay<=30)
                cout << iNgay+1 << "/" << iThang << "/" << iNam;
            else
                cout << 1 << "/" << 1 << "/" << iNam + 1;
        } else if(iThang==1||iThang==3||iThang==5||iThang==7||iThang==8||iThang==10||iThang==12)
        {
            if(iNgay<=30)
                cout << iNgay + 1 << "/" << iThang << "/" << iNam;
            else
                cout << 1 << "/" << iThang + 1 << "/" << iNam;
        } else if(iThang==4||iThang==6||iThang==9||iThang==11)
        {
            if(iNgay<=29)
                cout << iNgay + 1 << "/" << iThang << "/" << iNam;
            else
                cout << 1 << "/" << iThang + 1 << "/" << iNam;
        } else
        {
            if(iNam%4==0 && iNam%100!=0)
            {
                if(iNgay<=27)
                    cout << iNgay + 1 << "/" << iThang << "/" << iNam;
                else
                    cout << 1 << "/" << iThang + 1 << "/" << iNam;
            } else
            {
                if(iNgay<=28)
                    cout << iNgay + 1 << "/" << iThang << "/" << iNam;
                else
                    cout << 1 << "/" << iThang + 1 << "/" << iNam;
            }


        }
    }
#include "Date.h"

Date::Date()
{
    //ctor
}

Date::~Date()
{
    //dtor
}
