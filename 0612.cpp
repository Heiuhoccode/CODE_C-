#include<bits/stdc++.h>
using namespace std;
int stt = 1;
class SinhVien{
    private:
    string id, clas, dob;
    char name[1000];
    float gpa;
    public:
    friend istream &operator >> (istream &a, SinhVien &ds){
        a.ignore();
        stringstream ss;
        ss << stt; stt++;
        ds.id = ss.str();
        while(ds.id.size() < 3){
            ds.id = "0" + ds.id;
        }
        ds.id = "B20DCCN" + ds.id;
        a.getline(ds.name, 1000);
        getline(a, ds.clas);
        getline(a, ds.dob);
        a >> ds.gpa;
        return a;
    }
    friend ostream &operator << (ostream &a, SinhVien &ds){
        a << ds.id << " ";
        char check[4][100];
        int h = 0;
        char *token = strtok(ds.name, " ");
        while(token!=NULL){
            strcpy(check[h],token);
            h++;
            token = strtok(NULL, " ");
        }
        for(int i=0; i<h; i++){
            check[i][0] = toupper(check[i][0]);
            for(int j=1; j<strlen(check[i]);j++){
                check[i][j] = tolower(check[i][j]);
            }
        }
        for(int i=0; i<h; i++){
            a << check[i] << " ";
        }
        a << ds.clas << " ";
        if(ds.dob[1]=='/'){
            ds.dob = "0" + ds.dob;
        }
        if(ds.dob[4]=='/'){
            ds.dob.insert(3,"0");
        }
        a << ds.dob << " ";
        a << fixed << setprecision(2) << ds.gpa << endl;
        return a;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}