#include<bits/stdc++.h>

using namespace std;
int cnt = 1;
int tuoi(char check[3][5]){
    int a,b,c;
    stringstream ss (check[0]);
    ss >> a;
    stringstream ss1 (check[1]);
    ss1 >> b;
    stringstream ss2 (check[2]);
    ss2 >> c;
    int sum = a*30 + b +c *365;
    return sum;
}
class NhanVien{
    private:
        char dob[100];
        string id, name, sex, add,tax,doc;
        int ngaytuoi;
    public:
        friend istream &operator >> (istream &in, NhanVien &ds){
            scanf("\n");
            stringstream ss;
            ss << cnt; cnt++;
            ds.id = ss.str();
            while(ds.id.size() < 5){
                ds.id = "0" + ds.id;
            }
            getline(in, ds.name);
            getline(in, ds.sex);
            in.getline(ds.dob, 100);
            getline(in, ds.add);
            getline(in, ds.tax);
            getline(in, ds.doc);

            char cpydob[100];
            strcpy(cpydob,ds.dob);
            char check[3][5];
            int h = 0;
            char *c = strtok(cpydob, "/");
            while(c!=NULL){
                strcpy(check[h],c);
                h++;
                c = strtok(NULL,"/");
            }
            ds.ngaytuoi = tuoi(check);
            
            return in;
        }
        friend bool cmp (NhanVien, NhanVien);
        friend void sapxep(NhanVien,int);
        friend ostream &operator << (ostream &out, NhanVien ds){

            out << ds.id << " " << ds.name <<" "<<ds.sex<<" "<<ds.dob<<" "<<ds.add<<" "<<ds.tax<<" "<<ds.doc<<endl;
            return out;
        }
};


bool cmp(NhanVien a, NhanVien b){
    return a.ngaytuoi < b.ngaytuoi;
}

void sapxep(NhanVien a[], int n){
    sort(a,a+n, cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}