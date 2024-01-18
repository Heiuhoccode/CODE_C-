#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){cin.ignore();
		string mien;
		int nam, ngay;
		getline(cin,mien);
		cin >> nam >> ngay;
		if(mien=="Bac"){
			if(nam%4==0){
				if(ngay > 31 && ngay <=121){
					cout << "Xuan" << endl;
				}
				else if(ngay > 121 && ngay <=182){
					cout << "He" << endl;
				}
				else if(ngay > 182 && ngay <=274){
					cout << "Thu" << endl;
				}
				else if(ngay > 274 || ngay <=31){
					cout << "Dong" << endl;
				}
			}
			else{
				if(ngay > 31 && ngay <=120){
					cout << "Xuan" << endl;
				}
				else if(ngay > 120 && ngay <=181){
					cout << "He" << endl;
				}
				else if(ngay > 181 && ngay <=273){
					cout << "Thu" << endl;
				}
				else if(ngay > 273 || ngay <=31){
					cout << "Dong" << endl;
				}
			}
		}
		else{
			if(nam%4==0){
				if(ngay <=121 || ngay > 305){
					cout << "Kho" << endl;
				}
				else if(ngay > 121 && ngay <= 305){
					cout << "Mua" << endl;
				}
			}
			else{
				if(ngay <=120 || ngay > 304){
					cout << "Kho" << endl;
				}
				else if(ngay > 120 && ngay <= 304){
					cout << "Mua" << endl;
				}
			}
		}
	}
}
