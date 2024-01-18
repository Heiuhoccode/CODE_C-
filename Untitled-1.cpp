#include<bits/stdc++.h>

using namespace std;

int n, x[100];
int chuaxet[100]={1};
void Result(){
    for(int i=1; i<=n; i++){
        cout << x[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j=1; j<=n; j++){
        if(chuaxet[j]){
            x[i] = j;
            chuaxet[j]=0;
            if(i==n){
                Result();
            }
            else{
                Try(i+1);
            }
            chuaxet[j] = 1;
        }
    }
}
void khoitao(){
    for(int i=1; i<= n; i++){
        x[i]=i;
    }
}
int main(){
	cin >> n;
    khoitao();
    Try(1);
}
