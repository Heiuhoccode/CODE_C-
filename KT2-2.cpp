#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    string id, name, clas, email, phone;
};
bool cmp (sinhvien a, sinhvien b){
    if(a.clas == b.clas) return a.id < b.id;
    return a.clas < b.clas;
}
void sapxep(sinhvien a[], int h){
    sort(a,a+h,cmp);
}
int main(){
    int dem=0;
    string s;
    sinhvien a[1000]; int h=0;
    ifstream cin1("DANHSACH.in"); 
	string id,name,lop,mail,sdt;
	while(getline(cin1,s)){
		dem++;
		if(dem==1){
			id=s;
		}
		if(dem==2){
			name=s;
		}
		if(dem==3){
			lop=s;
		}
		if(dem==4){
			mail=s;
		}
		if(dem==5){
			sdt="0"+s;
			a[h].id = id;
            a[h].email = mail;
            a[h].clas = lop;
            a[h].name = name;
            a[h].phone  = sdt;
            dem=0;
            h++;
        }
    }
    sapxep(a,h);
    for(int i=0; i<h; i++){
        cout << a[i].id << " ";
        cout << a[i].name << " ";
        cout << a[i].clas << " ";
        cout << a[i].email <<" ";
        cout << a[i].phone <<endl;
    }
}
