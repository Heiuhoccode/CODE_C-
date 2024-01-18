#include<bits/stdc++.h>
using namespace std;
int h1=1,h2=1,h3=1;
map<string, string> ten;
map<string,string> diachi;
map<string, string> tenhang;
map<string,string> donvi;
map<string,int> giamua;
map<string,int> giaban;  
class KhachHang{
    protected:
    string mkh,namekh,gt,dob,add;
    public:
    friend istream &operator >> (istream &in, KhachHang &dskh){
        scanf("\n");
        stringstream ss;
        ss << h1; h1++;
        dskh.mkh = ss.str();
        while(dskh.mkh.size() <3){
            dskh.mkh = "0"+dskh.mkh;
        }
        dskh.mkh = "KH" + dskh.mkh;
        getline(in, dskh.namekh);
        getline(in, dskh.gt);
        getline(in, dskh.dob);
        getline(in, dskh.add);
        
        ten[dskh.mkh] = dskh.namekh;
        diachi[dskh.mkh] = dskh.add;
        return in;
    }
};
class MatHang{
    protected:
    string mmh, namemh, dvt;
    int mua, ban;
    public:
    friend istream &operator >> (istream &in, MatHang &dsmh){
        in.ignore();
        getline(in, dsmh.namemh);
        getline(in, dsmh.dvt);
        in >> dsmh.mua >> dsmh.ban;
        stringstream ss;
        ss << h2; h2++;
        dsmh.mmh = ss.str();
        while(dsmh.mmh.size() <3){
            dsmh.mmh = "0"+dsmh.mmh;
        }
        dsmh.mmh = "MH" + dsmh.mmh;
        tenhang[dsmh.mmh] = dsmh.namemh;
        donvi[dsmh.mmh] = dsmh.dvt;
        giamua[dsmh.mmh] = dsmh.mua;
        giaban[dsmh.mmh] = dsmh.ban;
        return in;
    }
};
class HoaDon{
    private:
    string mhd, makh, mamh;
    int soluong;
    public:
    friend istream &operator >> (istream &in, HoaDon &dshd){
        in.ignore();
        in >> dshd.makh;
        in >> dshd.mamh;
        in >> dshd.soluong;
        stringstream ss;
        ss <<h3; h3++;
        dshd.mhd = ss.str();
        while(dshd.mhd.size() < 3){
            dshd.mhd = "0" + dshd.mhd;
        }
        dshd.mhd = "HD" + dshd.mhd;
        return in;
    }
    friend ostream &operator << (ostream &out, HoaDon &dshd){
        out << dshd.mhd <<" ";
        out << ten[dshd.makh]<<" ";
        out << diachi[dshd.makh]<<" ";
        out << tenhang[dshd.mamh]<<" ";
        out << donvi[dshd.mamh]<<" ";
        out << giamua[dshd.mamh]<<" "<<giaban[dshd.mamh]<<" ";
        out << dshd.soluong << " "<< giaban[dshd.mamh]*dshd.soluong<<endl;
        return out;
    }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}