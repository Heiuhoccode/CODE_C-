#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
class giangvien{
    public:
    string id="";
    char name[1000];
    char bomon[1000];
    string khoa="";
    string ten="";
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
        cin.getline(ds[i].name, 1000);
        cin.getline(ds[i].bomon, 1000);
    }
}
void change(giangvien ds[], int n){
    for(int i=0; i<n; i++){
        char check_khoa[5][100];
        int h = 0;
        char*c = strtok(ds[i].bomon," ");
        while(c!=NULL){
            strcpy(check_khoa[h],c);
            h++;
            c=strtok(NULL," ");
        }
        for(int j=0; j<h; j++){
            check_khoa[j][0] = toupper(check_khoa[j][0]);
            ds[i].khoa = ds[i].khoa + check_khoa[j][0];
        }
    }
    for(int i=0; i<n; i++){
        char ten[1000];
        strcpy(ten, ds[i].name);
        char check_ten[5][100];
        int h = 0;
        char*c = strtok(ten," ");
        while(c!=NULL){
            strcpy(check_ten[h],c);
            h++;
            c=strtok(NULL," ");
        }
        for(int j=0; j<strlen(check_ten[h-1]); j++){
            ds[i].ten = ds[i].ten + check_ten[h-1][j];
        }
    }
}
bool cmp(giangvien a, giangvien b){
    if(a.ten == b.ten){
        return a.id < b.id;
    }
    return a.ten < b.ten;
}
void sapxep(giangvien a[], int n){
    sort(a,a+n,cmp);
}
void in(giangvien ds[], int n){
    for(int i=0; i<n; i++){
        cout << ds[i].id << " "<< ds[i].name <<" "<< ds[i].khoa << endl;
    }
}
int main(){
    int t; cin >> t;
    cin.ignore();
    giangvien ds[t];
    nhap(ds, t);
    change(ds,t);
    sapxep(ds,t);
    in(ds,t);
}