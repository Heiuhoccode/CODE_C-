#include<bits/stdc++.h>
using namespace std;
struct toado{
    int x,y;
    void nhap(){
        cin >> x >> y;
    }
};
void nhap(toado point[], int n){
    for(int i=0; i<n; i++){
        point[i].nhap();
    }
}
void tinhdientich(toado point[], int n){
    float sum1=0, sum2=0;
    for(int i=1; i<n; i++){
        sum1 += point[i-1].x*point[i].y;
        sum2 += point[i-1].y*point[i].x;
    }
    sum1 += point[0].y*point[n-1].x;
    sum2 += point[0].x*point[n-1].y;
    float dientich = (sum1 - sum2)/2;
    cout << fixed << setprecision(3) << dientich << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        toado point[n];
        nhap(point,n);
        tinhdientich(point, n);
    }
}