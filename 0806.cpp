#include<bits/stdc++.h>
using namespace std;
map<string, string> ten;
map<string,string> diachi;
map<string, string> tenhang;
map<string,string> donvi;
map<string,int> giamua;
map<string,int> giaban;  

class KhachHang{
    public:
    string mkh,namekh,gt,dob,add;
};
class MatHang{
    public:
    string mmh, namemh, dvt;
    int mua, ban;
};
class HoaDon{
    public:
    string mhd, makh, mamh;
    int soluong;
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K;
    string kh; int cnt = 0;
    ifstream op("KH.in");
    getline(op,kh);
    stringstream ss(kh);
    ss >> N;
    int dem = 0;
    while(getline(op,kh)){
        dem++;
        if(dem==1){
            dskh[cnt].namekh = kh;
        }
        if(dem==2){
            dskh[cnt].gt = kh;
        }
        if(dem==3){
            dskh[cnt].dob = kh;
        }
        if(dem==4){
            dskh[cnt].add = kh;
            dem=0;
            cnt++;
        }
    }
    for(int i=1; i<=N; i++){
        stringstream tem;
        tem << i;
        dskh[i-1].mkh = tem.str();
        while(dskh[i-1].mkh.size()<3){
            dskh[i-1].mkh="0"+dskh[i-1].mkh;
        }
        dskh[i-1].mkh="KH"+dskh[i-1].mkh;
        ten[dskh[i-1].mkh]=dskh[i-1].namekh;
        diachi[dskh[i-1].mkh] = dskh[i-1].add;
    }
    dem=0; cnt=0;
    ifstream op1("MH.in");
    getline(op1,kh);
    stringstream ss1(kh);
    ss1>>M;
    while(getline(op1,kh)){
        dem++;
        if(dem==1){
            dsmh[cnt].namemh = kh;
        }
        if(dem==2){
            dsmh[cnt].dvt = kh;
        }
        if(dem==3){
            stringstream tem(kh);
            tem >>  dsmh[cnt].mua;
        }
        if(dem==4){
            stringstream tem(kh);
            tem >> dsmh[cnt].ban;
            dem=0;
            cnt++;
        }
    }
    for(int i=1; i<=M; i++){
        stringstream tem;
        tem << i;
        dsmh[i-1].mmh = tem.str();
        while(dsmh[i-1].mmh.size()<3){
            dsmh[i-1].mmh="0"+dsmh[i-1].mmh;
        }
        dsmh[i-1].mmh="MH"+dsmh[i-1].mmh;
        tenhang[dsmh[i-1].mmh] = dsmh[i-1].namemh;
        donvi[dsmh[i-1].mmh] = dsmh[i-1].dvt;
        giamua[dsmh[i-1].mmh] = dsmh[i-1].mua;
        giaban[dsmh[i-1].mmh] = dsmh[i-1].ban;
    }
    dem=0;cnt=0;

    ifstream op2("HD.in");
    getline(op2,kh);
    stringstream ss2(kh);
    ss2 >> K;
    while(op2 >> kh){
        dem++;
        if(dem==1){
            dshd[cnt].makh=kh;
        }
        if(dem==2){
            dshd[cnt].mamh=kh;
        }
        if(dem==3){
            stringstream tem(kh);
            tem >> dshd[cnt].soluong;
            dem=0; cnt++;
        }
    }
    for(int i=1; i<=K; i++){
        stringstream tem;
        tem << i;
        dshd[i-1].mhd=tem.str();
        while(dshd[i-1].mhd.size()<3){
            dshd[i-1].mhd="0"+dshd[i-1].mhd;
        }
        dshd[i-1].mhd="HD"+dshd[i-1].mhd;
    }
    for(int i=0; i<K; i++){
        cout << dshd[i].mhd <<" ";
        cout << ten[dshd[i].makh] <<" ";
        cout << diachi[dshd[i].makh] <<" ";
        cout << tenhang[dshd[i].mamh]<<" ";
        cout << donvi[dshd[i].mamh]<<" ";
        cout << giamua[dshd[i].mamh]<<" ";
        cout << giaban[dshd[i].mamh]<<" ";
        cout << dshd[i].soluong<<" ";
        cout << giaban[dshd[i].mamh]*dshd[i].soluong<< endl;
    }
}