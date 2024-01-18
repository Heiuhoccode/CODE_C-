#include<bits/stdc++.h>

using namespace std;

struct ThiSinh{
	char name[1000];
	char date[1000];
	float mark1;
	float mark2;
	float mark3;
	float mark_sum;
};

void nhap(ThiSinh &A){
	cin.getline(A.name,1000);
	cin.getline(A.date,1000);
	cin >> A.mark1 >> A.mark2 >> A.mark3;
}

void in(ThiSinh A){
	A.mark_sum = A.mark1 + A.mark2 + A.mark3;
	cout << A.name <<" "<< A.date << " ";
	cout << fixed << setprecision(1) << A.mark_sum;
}

int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
