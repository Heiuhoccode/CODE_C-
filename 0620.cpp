#include<bits/stdc++.h>

using namespace std;

class sinhvien{
    private:
    string id, name, clas, email;
    public:
    friend istream &operator >> (istream &a, sinhvien &ds){
        scanf("\n");
        getline(a, ds.id);
        getline(a, ds.name);
        getline(a, ds.clas);
        getline(a, ds.email);
        return a;
    }
    friend bool cmp (sinhvien, sinhvien);
    friend void sapxep (sinhvien, int);
    friend ostream &operator << (ostream &a, sinhvien ds){
        a <<ds.id <<" "<<ds.name<<" "<<ds.clas<<" " <<ds.email<<endl;
        return a;
    }
};
bool cmp(sinhvien a, sinhvien b){
    
    if(a.clas == b.clas){
        return a.id < b.id;
    }return a.clas < b.clas;
}
void sapxep(sinhvien a[], int n){
    sort(a,a+n, cmp);
}
int main(){
    int n; cin >> n;
    sinhvien ds[n];
    for(int i=0; i<n; i++){
        cin >> ds[i];
    }
    sapxep(ds,n);
    for(int i=0; i<n; i++){
        cout << ds[i];
    }
}