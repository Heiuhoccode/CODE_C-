#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
class giangvien{
    public:
    string id="";
    string name;
    char bomon[1000];
    string khoa="";
    int thoaman=0;
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
void timkiem(giangvien ds[], string tu, int n){
    for(int i=0; i<n; i++){
        string tem = ds[i].name;
        for(int j=0; j<tem.size(); j++){
            tem[j] = tolower(tem[j]);
        }
        for(int j=0; j<tem.size();j++){
            bool trung = true;
            for(int h = 0; h<tu.size(); h++){
                if(tem[j+h] != tu[h]){
                    trung = false;
                }
            }
            if(trung){
                ds[i].thoaman = 1;
                break;
            }
        }
    }
}
void in(giangvien ds[], int n){
    for(int i=0; i<n; i++){
        if(ds[i].thoaman == 1){
            cout << ds[i].id << " "<< ds[i].name <<" "<< ds[i].khoa << endl;
        }
        ds[i].thoaman=0;
    }
}
int main(){
    int t; cin >> t;
    scanf("\n");
    giangvien ds[t];
    nhap(ds, t);
    for(int i=0; i<t; i++){
        change(ds[i].bomon, ds[i].khoa);
    }
    int q; cin >> q;
    scanf("\n");
    while(q--){
        string tu;
        getline(cin, tu);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA "<< tu<<":"<< endl;
        for(int i=0; i<tu.size(); i++){
            tu[i] = tolower(tu[i]);
        }
        timkiem(ds,tu,t);
        in(ds,t);    
    }
    
}