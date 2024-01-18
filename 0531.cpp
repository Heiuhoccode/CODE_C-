#include<bits/stdc++.h>
using namespace std;
struct toado{
    int x,y,z;
};
int ucln(int a,int b){
    // if(a==0 && b != 0) return b;
    // else if(b==0 && a!=0) return a;
    // else if(a==0 && b==0) return 1;
    // while(a!=b){
    //     if(a>b) a-=b;
    //     else b-=a;
    // }
    // return a;
    if(b==0 && a==0) return 1;
    if(b==0) return a;
    return ucln(b, a%b);
}

void nhap(toado &a,toado &b, toado &c, toado &d){
    cin >> a.x >> a.y >> a.z;
    cin >> b.x >> b.y >> b.z;
    cin >> c.x >> c.y >> c.z;
    cin >> d.x >> d.y >> d.z;
}
void thietlap_vector(toado v[], toado a, toado b, toado c, toado d){
    v[0].x = a.x - b.x; v[0].y = a.y - b.y; v[0].z = a.z - b.z;
    v[1].x = a.x - c.x; v[1].y = a.y - c.y; v[1].z = a.z - c.z;
    v[2].x = a.x - d.x; v[2].y = a.y - d.y; v[2].z = a.z - d.z;
    for(int i=0; i<3; i++){
        int uc = ucln(abs(v[i].x),ucln(abs(v[i].y),abs(v[i].z)));
        v[i].x /= uc;
        v[i].y /= uc;
        v[i].z /= uc;
    }
}
void thietlap_phaptuyen(toado v[], toado &n){
    n.x = v[0].y*v[1].z-v[0].z*v[1].y;
    n.y = v[0].z*v[1].x-v[0].x*v[1].z;
    n.z = v[0].x*v[1].y-v[0].y*v[1].x;
//    cout << n.x << " " << n.y << " " << n.z << endl;
    int uc = ucln(abs(n.x),ucln(abs(n.y),abs(n.z)));
    n.x /= uc;
    n.y /= uc;
    n.z /= uc;
}
void check(toado v[], toado n){
    int sum = v[2].x*n.x + v[2].y*n.y + v[2].z*n.z;
    if(sum == 0){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        toado a,b,c,d;
        nhap(a,b,c,d);
        toado v[3];
        thietlap_vector(v,a,b,c,d);
        toado n;
        thietlap_phaptuyen(v,n);
        check(v,n);
    }
}