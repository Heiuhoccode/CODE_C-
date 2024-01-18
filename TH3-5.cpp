#include<bits/stdc++.h>
using namespace std;
template<class a> string change(a n){
    bool check = false;
    string tem ="";
    if(n==0) tem+='0';
    if(n<0){
        n= -n;
        check = true;
    }
    while(n>0){
        tem = (char)(n%10+'0')+tem;
        n/=10;
    }
    if(check){
        tem = '-' +tem;
    }
    return tem;
}
int main(){
    string dau,cuoi,s;
    ifstream op;
    op.open("VANBAN.txt", ios::in);
    ofstream op1;
    op1.open("MUCLUC.txt",ios::out);
    while(getline(op,s)){
        if(s.size()>4){
            string a="";
            int i;
            for(int i=0; i<4; i++){
                a += s[i];
            }
            if(a=="Page"){
                long long cnt=0;
                for(i++; i<s.size(); i++){
                    cnt = cnt*10 +(int)(s[i]-'0');
                }
                cuoi = "--- "+change(cnt);
            }
        }
        if(s.size()>7){
            bool check = false;
            string a=""; int i;
            for(int i=0; i<6; i++){
                a+=s[i];
            }
            if(a=="Level1:"){
                dau = ">";
                check=true;
            }
            else if(a=="Level2:"){
                dau = ">>";
                check=true;
            }
            else if(a=="Level3:"){
                dau = ">>>";
                check=true;
            }
            a="";
            for(i++;i<s.size();i++){
                a+=s[i];
            }
            if(check){
                op1 << dau << a << cuoi << endl;
            }
        }
    }
    return 0;
}