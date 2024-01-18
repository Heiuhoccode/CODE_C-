#include<bits/stdc++.h>

using namespace std;
int check(string a){
	for(int i=1; i<a.size(); i++){
		if(a[i-1] > a[i]) return 0;
	}
	return 1;
}
void change(string a){
	int vitri;
	for(int i=a.size()-1; i>=1; i--){
		if(a[i-1] > a[i]){
			vitri = i-1;
			break;
		}
	}
	int max =0;
	int vitri_max;
	for(int i=vitri+1; i<a.size(); i++){
		if(a[vitri] > a[i] && a[i] > max){
			max = a[i];
			vitri_max = i;
		}
	}
	swap(a[vitri], a[vitri_max]);
	for(int i=0; i<a.size(); i++){
		cout << a[i];
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string number;
		cin >> number;
		if(check(number)==0){
			change(number);
		}
		else {
			cout << "-1" << endl;
		}
	}
}