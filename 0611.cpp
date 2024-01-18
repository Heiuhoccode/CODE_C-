#include<bits/stdc++.h>

using namespace std;
int k=1;
class SinhVien{
	private:
		int id;
		string name, clas, dob;
		float gpa;
	public:
		friend istream &operator >> (istream &in, SinhVien &a){
			a.id=k;k++;
			in.ignore();
			getline(cin,a.name);
			getline(cin,a.clas);
			getline(cin,a.dob);
			in >> a.gpa;
			
			if(a.dob[1]=='/'){
				a.dob = "0" +a.dob;
			}
			if(a.dob[4]=='/'){
				a.dob.insert(3,"0");
			}
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien &a){
			
			int h = 0;
			int b = a.id;
			while(b>0){
				h++;
				b/=10;
			}
			if(h==1){
				out << "B20DCCN00" ;
			}
			else{
				out << "B20DCCN0";
			}
			
			out << a.id << " ";
			out << a.name << " ";
			out << a.clas << " ";
			out << a.dob << " ";
			out << fixed << setprecision(2)<<a.gpa << endl;
			return out;
			
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
