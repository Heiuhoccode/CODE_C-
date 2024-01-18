#include<bits/stdc++.h>
using namespace std;
map<string,string> tl;
class theloaiphim{
    public:
    string id, name;
};
class ttphim{
    public:
    string id, mtl, date, name;
    int tap;
    long long ngay;
};
long long tinhngay(string a ){
    string ngay="", thang="" , nam="";
    ngay=ngay+a[0]+a[1];
    thang=thang+a[3]+a[4];
    nam=nam+a[6]+a[7]+a[8]+a[9];
    int d,t,y;
    stringstream ss(ngay);
    ss >> d;
    stringstream ss1(thang);
    ss1 >> t;
    stringstream ss2(nam);
    ss2 >> y;
    long long sum = d+t*30+y*365;
    return sum;
}
void nhap(theloaiphim theloai[], int n){
    for(int i=0; i<n; i++){
        stringstream ss;
        ss << i+1;
        theloai[i].id = ss.str();
        while(theloai[i].id.size()<3){
            theloai[i].id="0"+theloai[i].id;
        }
        theloai[i].id="TL"+theloai[i].id;
        getline(cin, theloai[i].name);
        tl[theloai[i].id]=theloai[i].name;
    }
}
void nhap1(ttphim a[], int n){
    for(int i=0; i<n; i++){
        stringstream ss;
        ss << i+1;
        a[i].id = ss.str();
        while(a[i].id.size()<3){
           a[i].id="0"+a[i].id;
        }
        a[i].id="P"+a[i].id;
        getline(cin, a[i].mtl);
        getline(cin, a[i].date);
        getline(cin, a[i].name);
        cin >> a[i].tap;
        scanf("\n");
        a[i].ngay=tinhngay(a[i].date);
    }
}
bool cmp(ttphim a, ttphim b){
    if(a.ngay==b.ngay){
        if(a.name==b.name){
            return a.tap >b.tap;
        }
        return a.name < b.name;    
    }
    return a.ngay < b.ngay;
}
void sapxep(ttphim a[], int n){
    sort(a,a+n,cmp);
}
void in(ttphim a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i].id<<" ";
        cout << tl[a[i].mtl]<<" ";
        cout << a[i].date<<" ";
        cout << a[i].name<<" ";
        cout << a[i].tap<<endl;
    }
}
int main(){
    int n,m; cin >> n >> m;
    scanf("\n");
    theloaiphim theloai[n];
    ttphim phim[m];
    nhap(theloai, n);
    nhap1(phim, m);
    sapxep(phim, m);
    in(phim, m);
    return 0;
}