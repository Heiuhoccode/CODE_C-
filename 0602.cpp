#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string name;
		string clas;
		string dob;
		float gpa;
	public:
		friend istream &operator >> (istream &temp, SinhVien &a){
			getline(temp,a.name);
			getline(temp,a.clas);
			getline(temp,a.dob);
			temp >> a.gpa;
			if(a.dob[1]=='/'){
				a.dob = "0" + a.dob;
			}
			if(a.dob[4]=='/'){
				a.dob.insert(3,"0");
			}
			string str = "", tem;
			stringstream ss(a.name);
			while(ss>>tem){
				transform(tem.begin(), tem.end(), tem.begin(), ::tolower);
				tem[0] = toupper(tem[0]);
				str += tem + " ";
			}
			str.pop_back();
			a.name=str;
			return temp;
		}
		
		friend ostream &operator << (ostream &temp,const SinhVien &a){
			temp << "B20DCCN001" << " " << a.name <<" "<<a.clas << " "<<a.dob<<" "<<fixed << setprecision(2) << a.gpa;
			return temp;
		}
			
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
