#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string name,cls,yob,msv;
		double gpa;
		static int cnt;
	public:
		int getCnt();
		friend istream& operator >> (istream &in,SinhVien& a);
		friend ostream& operator << (ostream& out,SinhVien& a);
		
};
int SinhVien::cnt=0;

istream& operator >> (istream& in,SinhVien& a){	
	cin.ignore();
	getline(cin,a.name);
	getline(cin,a.cls);
	getline(cin,a.yob);
	in >> a.gpa;
	a.cnt++;
	a.msv="B20DCCN" + string(3-to_string(a.cnt).length(),'0')+to_string(a.cnt);
	return in;
}
ostream& operator << (ostream& out,SinhVien& a){
	if(a.yob[2]!='/') a.yob="0"+a.yob;
	if(a.yob[5]!='/') a.yob.insert(4,"0");
	out << a.msv << " " << a.name << " " << a.cls << " " << a.yob << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
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