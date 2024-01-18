#include<bits/stdc++.h>

using namespace std;
#define PI 3.141592653589793238
struct Toado{
	double x,y;
};
void nhap(Toado &A){
	cin >> A.x >> A.y;
}
void tinhdodai(Toado A, Toado B,double &a){
	a = (double)sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		struct Toado A,B,C;
		nhap(A); nhap(B); nhap(C);
		double a, b, c, R, S, dt;
		tinhdodai(A,B,a);
		tinhdodai(B,C,b);
		tinhdodai(A,C,c);
		if((a+b)<=c || (b+c)<= a || (a+c)<=b || a==0 || b==0 || c==0){
			cout << "INVALID" << endl;
		}
		else{
			double p = (a+b+c)/2;
			S = 16*p*(p-a)*(p-b)*(p-c);
			R = PI*a*b*c*a*b*c;
			dt = R/S;
			cout <<fixed << setprecision(3) <<dt  << endl;
		}		//round(dt*1000)/1000
	}
}
