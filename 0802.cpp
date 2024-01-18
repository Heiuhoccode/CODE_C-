#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    vector<long long> a;
    int h=0;
    ifstream op("DATA.in");
    while(op >> num){
        if(num.size()<10){
            long long tem;
            stringstream ss(num);
            ss >> tem;
            a.push_back(tem);
            h++;
        }
    }
    long long sum =0;
    for(int i=0; i<h; i++){
        sum += a[i];
    }
    cout << sum << endl;
}