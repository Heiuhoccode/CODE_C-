#include<bits/stdc++.h>

using namespace std;

void change(float &a){
	if(3<=a && a<=4){
		a=2.5;
	}
	if(5<=a && a<=6){
		a=3.0;
	}
	if(7<=a && a<=9){
		a=3.5;
	}
	if(10<=a && a<=12){
		a=4.0;
	}
	if(13<=a && a<=15){
		a=4.5;
	}
	if(16<=a && a<=19){
		a=5.0;
	}
	if(20<=a && a<=22){
		a=5.5;
	}
	if(23<=a && a<=26){
		a=6.0;
	}
	if(27<=a && a<=29){
		a=6.5;
	}
	if(30<=a && a<=32){
		a=7.0;
	}
	if(33<=a && a<=34){
		a=7.5;
	}
	if(35<=a && a<=36){
		a=8.0;
	}
	if(37<=a && a<=38){
		a=8.5;
	}
	if(39<=a && a<=40){
		a=9.0;
	}			
}

int main(){
	int t;
	cin >> t;
	while(t--){
		float a,b;
		float c,d;
		cin >> a >> b >> c >> d;
		change(a);
		change(b);
		float tb = (a+b+c+d)/4;
		float duoi = tb-(int)tb;
		if(duoi<0.25){
			tb = (int)tb;
		}
		else if(duoi >=0.25 && duoi<0.75){
			tb = (int)tb + 0.5;
		}
		else{
			tb = (int)tb +1;
		}
		cout << fixed << setprecision(1) << tb << endl;
	}
}

