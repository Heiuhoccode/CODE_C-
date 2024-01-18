#include<bits/stdc++.h>
using namespace std;
int stt = 1;
class SinhVien{
    private:
    string id, clas, dob;
    string name;
    float gpa;
    public:
    friend istream &operator >> (istream &a, SinhVien &ds){
        scanf("\n");
        stringstream ss;
        ss << stt; stt++;
        ds.id = ss.str();
        while(ds.id.size() < 3){
            ds.id = "0" + ds.id;
        }
        ds.id = "B20DCCN" + ds.id;
        getline(a, ds.name);
        getline(a, ds.clas);
        getline(a, ds.dob);
        if(ds.dob[1]=='/'){
            ds.dob = "0" + ds.dob;
        }
        if(ds.dob[4]=='/'){
            ds.dob.insert(3,"0");
        }
        a >> ds.gpa;
        return a;
    }

    friend void sapxep(SinhVien, int);
    friend bool cmp(SinhVien, SinhVien);
    friend ostream &operator << (ostream &a, SinhVien &ds){
        a << ds.id << " ";

        string str = "", temp;
        stringstream ss(ds.name);
        while (ss >> temp) {
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            temp[0] = toupper(temp[0]);
            str += temp + " ";
        }
        str.pop_back();
        ds.name = str;
        
        a << ds.name << " ";
        a << ds.clas << " ";
        a << ds.dob << " ";
        a << fixed << setprecision(2) << ds.gpa << endl;
        return a;
    }
};
bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}
void sapxep(SinhVien a[], int n){
    sort(a,a+n,cmp); 
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
