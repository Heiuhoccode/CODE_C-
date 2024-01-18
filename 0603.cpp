#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
class SinhVien{
    private:
    string id, name, clas, dob;
    float gpa;
    public:
    friend istream &operator >> (istream &in, SinhVien &a){
        stringstream ss;
        ss << cnt;
        a.id = ss.str();
        while(a.id.size()<3){
            a.id = "0" + a.id;
        }
        a.id = "B20DCCN" + a.id;

        getline(in,a.name);
        stringstream ss1(a.name);
        string word;
        vector<string> ten;
        while(ss1 >> word){
            word[0] = toupper(word[0]);
            for(int i=1; i<word.size(); i++){
                word[i] = tolower(word[i]);
            }
            ten.push_back(word);
        }
        a.name = "";
        for(int i=0; i<ten.size(); i++){
            
            if(i==ten.size()-1){
                a.name = a.name + ten[i];
            }
            else{
                a.name = a.name + ten[i] +" ";    
            }
        }
        getline(in, a.clas);
        getline(in, a.dob);
        if(a.dob[1]=='/'){
            a.dob = "0" + a.dob;
        }
        if(a.dob[4]=='/'){
            a.dob.insert(3,"0");
        }
        in >> a.gpa;
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien a){
        out << a.id << " " << a.name << " "<<a.clas<<" "<<a.dob<<" ";
        out << fixed << setprecision(2) << a.gpa;
        return out;
    }
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}