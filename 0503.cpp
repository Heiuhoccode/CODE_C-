#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu, mau;
};

void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}

long long ucln(long long a, long long b){
	if(b==0){
		return a;
	}
	return ucln(b, a%b);
}

void rutgon(PhanSo &p){
	long long a = ucln(abs(p.mau),abs(p.tu));
	p.tu/=a;
	p.mau/=a;
}

void in(PhanSo p){
	cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
