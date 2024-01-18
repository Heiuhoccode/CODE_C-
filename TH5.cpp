#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int d,m;
		cin >> d>>m;
		int ngay = d+m*30;
		if(ngay >= 111 && ngay <= 139){
			cout << "Bach Duong" << endl;
		}
		else if(ngay >= 140 && ngay <= 170){
			cout << "Kim Nguu" << endl;
		}
		else if(ngay >= 171 && ngay <= 200){
			cout << "Song Tu" << endl;
		}
		else if(ngay >= 201 && ngay <= 232){
			cout << "Cu Giai" << endl;
		}
		else if(ngay >= 233 && ngay <= 262){
			cout << "Su Tu" << endl;
		}
		else if(ngay >= 263 && ngay <= 292){
			cout << "Xu Nu" << endl;
		}
		else if(ngay >= 293 && ngay <= 322){
			cout << "Thien Binh" << endl;
		}
		else if(ngay >= 323 && ngay <= 352){
			cout << "Thien Yet" << endl;
		}
		else if(ngay >= 353 && ngay <= 381){
			cout << "Nhan Ma" << endl;
		}
		else if(ngay >= 382 || ngay <= 49){
			cout << "Ma Ket" << endl;
		}
		else if(ngay >= 50 && ngay <= 78){
			cout << "Bao Binh" << endl;
		}
		else if(ngay >= 79 && ngay <= 110){
			cout << "Song Ngu" << endl;
		}
		
	}
}
