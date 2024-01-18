#include<bits/stdc++.h>

using namespace std;
class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo (long long tu = 0, long long mau = 1):tu(tu),mau(mau){}
		long long ucln(long long a, long long b){
			if(b==0) return a;
			else return ucln(b,a%b);
		}
		
		friend istream &operator >> (istream &in, PhanSo &p){
			in >> p.tu >> p.mau;
			return in;
		}
		
		void rutgon(){
			long long uc = ucln(tu,mau);
			tu /= uc;
			mau /= uc;
		}	
		
		friend ostream &operator << (ostream &out,const PhanSo &p){
			out << p.tu <<"/"<<p.mau<<endl;
			return out;
		}
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
