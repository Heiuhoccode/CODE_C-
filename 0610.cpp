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
		void rutgon(){
			long long uc = ucln(tu,mau);
			tu /= uc;
			mau /= uc;
		}
		
		PhanSo operator+(const PhanSo &temp)const{
			long long tu1 = tu * temp.mau + temp.tu* mau;
			long long mau1 = mau * temp.mau;
			PhanSo sum(tu1,mau1);
			sum.rutgon();
			return sum;
		}
		
		friend istream &operator >> (istream &in, PhanSo &p){
			in >> p.tu >> p.mau;
			return in;
		}
		
		
		
		friend ostream &operator << (ostream &out,const PhanSo &sum){
			out << sum.tu<<"/"<<sum.mau<<endl;
			return out;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
