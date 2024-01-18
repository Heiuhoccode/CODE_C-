#include<bits/stdc++.h>
using namespace std;
string change(char a){
    if(a=='2') return "2";
    if(a=='3') return "3";
    if(a=='4') return "322";
    if(a=='5') return "5";
    if(a=='6') return "53";
    if(a=='7') return "7";
    if(a=='8') return "7222";
    if(a=='9') return "7332";
}
bool cmp (string a, string b){
    return a > b;
}
void ketqua(string nb){
    string result="";
    for(int i=0; i<nb.size(); i++){
        if(nb[i]=='1' || nb[i]=='0') continue;
        else{
            result = result + change(nb[i]);
        }
    }
    for(int i=0; i<result.size()-1; i++){
        for(int j=i+1; j<result.size(); j++){
            if(result[i] < result[j]){
                char tem = result[i];
                result[i] = result[j];
                result[j] = tem;
            }
        }
    }
    cout << result << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; cin.ignore();
        string nb;
        cin >> nb;
        ketqua(nb);
    }
}