#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
class giangvien{
    public:
    string id="";
    string name;
    char bomon[1000];
    string khoa="";
};
void nhap( giangvien ds[], int n){
    for(int i=0; i<n; i++){
        stringstream ss;
        ss << cnt; cnt++;
        ds[i].id = ss.str();
        while(ds[i].id.size() < 2){
            ds[i].id = "0"+ds[i].id;
        }
        ds[i].id = "GV" + ds[i].id;
        getline(cin, ds[i].name);
        cin.getline(ds[i].bomon, 1000);
    }
}
void change(char a[], string &b){
    char check_khoa[5][100];
    int h = 0;
    char*c = strtok(a," ");
    while(c!=NULL){
        strcpy(check_khoa[h],c);
        h++;
        c=strtok(NULL," ");
    }
    for(int j=0; j<h; j++){
        check_khoa[j][0] = toupper(check_khoa[j][0]);
        b = b + check_khoa[j][0];
    }
}
void in(giangvien ds[],string khoahoc, int n){
    for(int i=0; i<n; i++){
        if(ds[i].khoa == khoahoc){
            cout << ds[i].id << " "<< ds[i].name <<" "<< ds[i].khoa << endl;
        }
    }
}
int main(){
    int t; cin >> t;
    cin.ignore();
    giangvien ds[t];
    nhap(ds, t);
    for(int i=0; i<t; i++){
        change(ds[i].bomon, ds[i].khoa);
    }
    int q; cin >> q;
    cin.ignore();
    while(q--){
        char khoa[1000];
        string khoahoc;
        cin.getline(khoa, 1000);
        
        change(khoa,khoahoc);
        cout << "DANH SACH GIANG VIEN BO MON "<< khoahoc<<":"<< endl;
        in(ds,khoahoc,t);    
    }
    
}