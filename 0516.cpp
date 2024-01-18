#include<bits/stdc++.h>

using namespace std;

struct mat_hang{
	int stt;
	char name[1000];
	char loai[1000];
	float mua, ban;
	float loinhuan;
};

void nhap(mat_hang ds[], int N){
	for(int i=0; i<N; i++){
		ds[i].stt = i+1;
		cin.ignore();
		cin.getline(ds[i].name,1000);
		cin.getline(ds[i].loai,1000);
		cin >> ds[i].mua >> ds[i].ban;
		ds[i].loinhuan = ds[i].ban - ds[i].mua;
	}
}

void sapxep(mat_hang ds[], int N){
	bool reduce;
	do{
		reduce = false;
		for(int i=1; i<N; i++){
			if(ds[i-1].loinhuan < ds[i].loinhuan){
				struct mat_hang temp = ds[i-1];
				ds[i-1] = ds[i];
				ds[i] = temp;
				reduce = true;
			}
		}
	}while(reduce);
}

void in(mat_hang ds[], int N){
	for(int i=0; i<N; i++){
		cout << ds[i].stt<< " ";
		cout << ds[i].name<< " ";
		cout << ds[i].loai << " ";
		cout << fixed << setprecision(2) << ds[i].loinhuan << endl;
	}
}


int main(){
	int N;
	cin >> N;
	struct mat_hang ds[N];
	nhap(ds, N);
	sapxep(ds, N);
	in(ds, N);
}
