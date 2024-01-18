#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    ifstream op("DATA.in");
    map<int, int> soluong;
    int a[100000];
    int h=0;
    while(op >> num){
        a[h]=num;
        h++;
        soluong[num]++;
    }
    sort(a,a+h);
    for(int i=0; i<h; i++){
        if(soluong[a[i]]!=0){
            cout << a[i] <<" "<<soluong[a[i]]<<endl;
            soluong[a[i]]=0;
        }
    }
}