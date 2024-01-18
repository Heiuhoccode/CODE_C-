#include<bits/stdc++.h>

using namespace std;

struct SoPhuc{
	int thuc, ao;
};

SoPhuc binh_phuong_tong(const SoPhuc &a,const SoPhuc &b){
	SoPhuc C;
	C.thuc = pow((a.thuc+b.thuc),2)-pow((a.ao+b.ao),2);
	C.ao = 2*(a.thuc+b.thuc)*(a.ao+b.ao);
	return C;
}

void hien_thi(SoPhuc C){
	cout << C.thuc << " + " << C.ao<<"i" << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
