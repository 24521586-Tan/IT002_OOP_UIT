#ifndef PHANSO_H
#define PHANSO_H

class PhanSo {
private:
    int iTu;
    int iMau;

public:
    // Constructor mặc định
    PhanSo();

    // Constructor có tham số
    PhanSo(int tu, int mau);

    // Nhập, xuất
    void Nhap();
    void Xuat() const;

    // Rút gọn phân số
    void RutGon();

    // Các phép toán
    PhanSo Tong(const PhanSo& ps) const;
    PhanSo Hieu(const PhanSo& ps) const;
    PhanSo Tich(const PhanSo& ps) const;
    PhanSo Thuong(const PhanSo& ps) const;

    // So sánh
    int SoSanh(const PhanSo& ps) const;

private:
    // Tìm ước chung lớn nhất
    int UCLN(int a, int b) const;
};

#endif
