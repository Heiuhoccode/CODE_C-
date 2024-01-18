#include<bits/stdc++.h>
using namespace std;
struct thongtin{
    string name,hodem="",ten="", phone, date;
};
string ngay(const string& inputdate){
    return inputdate.substr(0,2)+"/"+inputdate.substr(3,2);
}
bool cmp(thongtin a, thongtin b){
    if(a.ten==b.ten){
        return a.hodem < b.hodem;
    }
    return a.ten < b.ten;
}
void sapxep(thongtin a[], int n){
    sort(a,a+n,cmp);
}
int main(){
    ifstream input("SOTAY.txt");
    ofstream output("DIENTHOAI.txt");
    thongtin a[1000];
    thongtin tem;
    string s;
    int h=0;
    int dem = 0;
    string s1="";
    while(getline(input,s)){
        dem++;
        if(s[0]=='N' && s[1]=='g' && s[2]=='a' &&s[3]=='y'){
            s1="";
            for(int i=5; i<s.size(); i++){
                s1 += s[i];
            }
            dem=0;
        }
        a[h].date=s1;
        if(dem==1){
            a[h].name=s;
        }
        if(dem==2){
            a[h].phone=s;
            h++;dem=0;
        }
    }
    for(int i=0; i<h; i++){
        string a,b,c;
        stringstream ss(a[i].name);
        ss >> a >> b>>c;
        a[i].hodem = a[i].hodem+a+b;
        a[i].ten += c;
    }
    sapxep(a,h);
    for(int i=0; i<h; i++){
        output << a[i].name<<": "<<a[i].phone<<" "<<a[i].date<<endl;
    }
    input.close();
    output.close();
}