// Lớp Cha
#include<bits/stdc++.h>
using namespace std;
class Nguoi {
protected:
    string ten;

public:
    friend istream &operator >> (istream &in, Nguoi &a){
        getline(in, a.ten);
        return in;
    }
    void setTen(const string& ten) {
        this->ten = ten;
    }
    string getTen() const {
        return ten;
    }
};

// Lớp Con
class KhachHang : public Nguoi {
private:
    string diaChi;

public:
    // friend istream &operator >> (istream &in, KhachHang &a){
    //     getline(in, a.diaChi);
    //     return in;
    // }
    void setDiaChi(const string& diaChi) {
        this->diaChi = diaChi;
    }

    string getDiaChi() const {
        return diaChi;
    }
};

// Sử dụng
int main() {
    KhachHang khachHang;
    cin >> khachHang;
    cout << "Khach hang: " << khachHang.getTen() << endl<<"Dia chi: " << khachHang.getDiaChi() << std::endl;

    return 0;
}
