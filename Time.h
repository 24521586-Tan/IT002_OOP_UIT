#ifndef TIME_H
#define TIME_H

class ThoiGian {
private:
    int iGio;
    int iPhut;
    int iGiay;

public:
    ThoiGian();
    ThoiGian(int gio, int phut, int giay);

    void Nhap();
    void Xuat() const;
    void TinhCongThemMotGiay();
};

#endif
