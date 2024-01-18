#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu, mau;
};

void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}

long long ucln(long long a, long long b){
	if(b==0) return a;
	else return ucln(b, a%b);
}

void rutgon(PhanSo &t){
	long long a = ucln(abs(t.tu), abs(t.mau));
	t.tu /= a;
	t.mau /= a;
}

PhanSo tong(PhanSo p, PhanSo q){
	PhanSo t;
	t.tu = p.tu*q.mau + p.mau*q.tu;
	t.mau = p.mau*q.mau;
	rutgon(t);
	return t;
}

void in(PhanSo t){
	cout << t.tu << "/" << t.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
