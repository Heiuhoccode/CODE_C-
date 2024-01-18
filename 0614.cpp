#include<bits/stdc++.h>

using namespace std;
int cnt = 1;
class NhanVien{
    private:
        string id, name, sex, dob,add,tax,doc;
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
            getline(in , ds.sex);
            getline(in, ds.dob);
            getline(in, ds.add);
            getline(in , ds.tax);
            getline(in , ds.doc);
            return in;
        }
        friend ostream &operator << (ostream &out, NhanVien ds){
            out << ds.id << " " << ds.name <<" "<<ds.sex<<" "<<ds.dob<<" "<<ds.add<<" "<<ds.tax<<" "<<ds.doc<<endl;
            return out;
        }
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}