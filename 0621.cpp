#include<bits/stdc++.h>
using namespace std;
struct SV{
    string id, name, clas, email;
};
bool cmp(SV a, SV b){
    return a.id < b.id;
}
void sapxep(SV a[], int n){
    sort(a,a+n,cmp);
}
int main(){
    string s;
    SV a[1000];
    int h = 0,dem=0;
    string id,name,clas,email;
    while(getline(cin, s)){
        dem++;
        if(dem==1){
            id=s;
        }
        if(dem==2){
            name=s;
        }
        if(dem==3){
            clas=s;
        }
        if(dem==4){
            email=s;
            a[h].id =id;
            a[h].name=name;
            a[h].clas=clas;
            a[h].email=email;
            h++;
            dem=0;
        }
    }
    sapxep(a,h);
    for(int i=0; i<h; i++){
        cout << a[i].id<<" "<<a[i].name<<" "<<a[i].clas<<" "<<a[i].email<<endl;
    }
}