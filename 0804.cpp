#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    return a<b;
}
void sapxep(vector<string> &a, int h){
    sort(a.begin(), a.end(), cmp);
}
int main(){
    string num;
    vector<string> a;
    int h=0;
    map<string, int> soluong;
    ifstream op("VANBAN.in");
    while(op >> num){
        for(int i=0; i<num.size(); i++){
            num[i]=tolower(num[i]);
        }
        soluong[num]++;
        a.push_back(num);
        h++;
    }
    sapxep(a,h);
    for(int i=0; i<h; i++){
        if(soluong[a[i]]!=0){
            cout << a[i]<< endl;
            soluong[a[i]]=0;    
        }
    }
    return 0;
}