#include <bits/stdc++.h>
using namespace std;

class CSoPhuc
{
private:
    double ao, thuc;

public:
    CSoPhuc();
    CSoPhuc(double, double);

    friend istream& operator >> (istream&, CSoPhuc&);
    friend ostream& operator << (ostream&, CSoPhuc);

    CSoPhuc operator + (const CSoPhuc&);
    CSoPhuc operator - (const CSoPhuc&);
    CSoPhuc operator * (const CSoPhuc&);
    CSoPhuc operator / (const CSoPhuc&);

    bool operator == (const CSoPhuc&);
    bool operator != (const CSoPhuc&);
};

CSoPhuc::CSoPhuc(double ao, double thuc)
{
    this->ao = ao;
    this->thuc = thuc;
}

CSoPhuc::CSoPhuc()
{
    ao = thuc = 0;
}

istream& operator >> (istream& in, CSoPhuc &sp)
{
    cout << "Nhap vao phan ao: "; in >> sp.ao;
    cout << "Nhap vao phan thuc: "; in >> sp.thuc;

    return in;
}

ostream& operator << (ostream& out, CSoPhuc sp)
{
    cout << sp.ao << "i + " << sp.thuc;
    return out;
}

CSoPhuc CSoPhuc::operator+(const CSoPhuc &sp)
{
    CSoPhuc kq;
    kq.ao = ao + sp.ao;
    kq.thuc = thuc + sp.thuc;

    return kq;
}

CSoPhuc CSoPhuc::operator-(const CSoPhuc &sp)
{
    CSoPhuc kq;
    kq.ao = ao - sp.ao;
    kq.thuc = thuc - sp.thuc;

    return kq;
}

CSoPhuc CSoPhuc::operator*(const CSoPhuc &sp)
{
    CSoPhuc kq;
    kq.thuc = thuc * sp.thuc - ao * sp.ao;
    kq.ao = thuc * sp.ao + ao * sp.thuc;

    return kq;
}

CSoPhuc CSoPhuc::operator/(const CSoPhuc &sp)
{
    CSoPhuc kq;
    double mau = sp.thuc * sp.thuc + sp.ao * sp.ao;
    kq.thuc = (thuc * sp.thuc + ao * sp.ao) / mau;
    kq.ao = (ao * sp.thuc - thuc * sp.ao) / mau;

    return kq;
}

bool CSoPhuc::operator==(const CSoPhuc& sp)
{
    return (ao==sp.ao) && (thuc==sp.thuc);
}

bool CSoPhuc::operator!=(const CSoPhuc& sp)
{
    return (ao!=sp.ao) || (thuc!=sp.thuc);
}


int main()
{
    CSoPhuc sp1, sp2;
    cout << "Nhap so phuc thu nhat: "; cin >> sp1;
    cout << "Nhap so phuc thu hai: "; cin >> sp2;
    CSoPhuc tong = sp1 + sp2;
    CSoPhuc hieu = sp1 - sp2;
    CSoPhuc tich = sp1*sp2;
    CSoPhuc thuong = sp1/sp2;
    bool bang = (sp1==sp2);
    bool kobang = sp1!=sp2;

    cout << "Tong hai so phuc: " << tong << endl;
    cout << "Hieu hai so phuc: " << hieu << endl;
    cout << "Tich hai so phuc: " << tich << endl;
    cout << "Thuong hai so phuc: " << thuong << endl;
    if(bang)
        cout << "Hai so phuc bang nhau" << endl;
    if(kobang)
        cout << "Hai so phuc khong bang nhau" << endl;
    return 0;
}
