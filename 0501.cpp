#include<bits/stdc++.h>

using namespace std;

struct Point{
	double x, y;
	
};

void input(Point &A){
	cin >> A.x >> A.y;
}

double distance(Point A, Point B){
	double result;
	double h = pow((A.x-B.x),2) + pow((A.y-B.y),2);
	result = sqrt(h);
	return result;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
