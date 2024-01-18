#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		double kc ;
		double a1= (double)pow(a-c,2);
		double a2= (double)pow(b-d,2);
		kc =sqrt(a1+a2);
		cout << fixed << setprecision(4) << kc << endl;
	}
}
