#ifndef SOPHUC_H
#define SOPHUC_H

class SoPhuc {
private:
    double iThuc;
    double iAo;

public:
    SoPhuc();
    SoPhuc(double thuc, double ao);

    void Nhap();
    void Xuat() const;

    SoPhuc Tong(const SoPhuc& sp) const;
    SoPhuc Hieu(const SoPhuc& sp) const;
    SoPhuc Tich(const SoPhuc& sp) const;
    SoPhuc Thuong(const SoPhuc& sp) const;
};

#endif
