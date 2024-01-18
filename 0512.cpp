#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu;
	long long mau;
};

int ucln(long long a, long long b){
	if(b==0) return a;
	else return ucln(b,a%b);
}

void rutgon(PhanSo &C){
	long long uc = ucln(abs(C.tu),abs(C.mau));
	C.tu /= uc;
	C.mau /= uc;
}

void process(PhanSo A, PhanSo B){
	struct PhanSo C;
	C.tu = A.tu*B.mau + A.mau*B.tu;
	C.mau = A.mau*B.mau;
	C.tu = pow(C.tu,2);
	C.mau = pow(C.mau,2);
	rutgon(C);
	cout << C.tu << "/" << C.mau <<" ";
	struct PhanSo D;
	D.tu = A.tu * B.tu * C.tu;
	D.mau = A.mau * B.mau * C.mau;
	rutgon(D);
	cout << D.tu << "/" << D.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
