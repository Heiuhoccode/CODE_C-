#include<bits/stdc++.h>

using namespace std;

class sinhvien{
	private:
		int sohang1;
		int so2;
	public:	
		friend istream &operator >> (istream &b, sinhvien &a){
			b >> sohang1 >> so2;
			return b;
		}
		friend ostream &operator << (ostream &b,const sinhvien &a){
			b << sohang1+so2;
			return b;
		}
};

int main(){
	class sinhvien a;
	cin >> a;
	cout << a;
	return 0;
}

