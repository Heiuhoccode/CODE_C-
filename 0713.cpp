#include<bits/stdc++.h>
using namespace std;

void result(int a[], int n){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << " ";
}
void next_permutation(int a[], int n, int &ch_cuoi){
    int i=n-1;
    while(i>0 && a[i] > a[i+1]){
        i--;
    }
    if(i>0){
        int j=n;
        while(a[j]<a[i]){
            j--;
        }
        swap(a[i],a[j]);
        int r=i+1,s=n;
        while(r<n){
            swap(a[r],a[n]);
            r++; s--;
        }
    }
    else{
        ch_cuoi = 1;
    }
}
void khoitao(int a[], int n){
    for(int i=1; i<=n; i++){
        a[i]=i;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int ch_cuoi = 0;
        int  n;
        cin >> n;
        int a[n];
        khoitao(a,n);
        while(ch_cuoi==0){
            result(a,n);
            next_permutation(a,n,ch_cuoi);
        }   
        cout << endl; 
    }
    
}