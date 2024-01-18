#include<bits/stdc++.h>

using namespace std;

struct thisinh{
	int mats;
	char ename[100];
	float dim;
	string dantoc;
	int khuvuc;
	char do_truot[100];
};p
void nhap(thisinh ds[], int n){
//	cin.ignore();
	for(int i=0; i<n; i++){
	cin.ignore();
		ds[i].mats = i+1;
		cin.getline(ds[i].name,100);
		cin >> ds[i].diem;
		cin.ignore();
		getline(cin, ds[i].dantoc);
		cin >> ds[i].khuvuc;
	}
}

void tinhdiem(thisinh ds[], int n){
	for(int i=0 ;i<n; i++){
		if(ds[i].khuvuc == 1){
			ds[i].diem += 1.5;
		}
		if(ds[i].khuvuc == 2){
			ds[i].diem += 1;
		}
		if(ds[i].dantoc != "Kinh"){
			ds[i].diem += 1.5;
		}
	}
	for(int i=0 ;i<n; i++){
		if(ds[i].diem<20.5){
			strcpy(ds[i].do_truot,"Truot");
		}
		else strcpy(ds[i].do_truot,"Do");
	}
}

void sapxep(thisinh ds[], int n){
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diem < ds[j].diem){
				swap(ds[i],ds[j]);
			}
		}
	}
}
void sapxep1(thisinh ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diem == ds[j].diem && ds[i].mats>ds[j].mats){
				swap(ds[i],ds[j]);
			}
		}
	}	
}
	
//	bool tangdan;
//	do{
//		giamdan = false;
//		for(int i=1; i<n; i++){
//			if(ds[i-1].diem<ds[i].diem){
//				swap(ds[i-1],ds[i]);
//				giamdan = true;
//			}
//		}
//	}while(tangdan);

int scs(int a){
	int h = 0;
	while(a>0){
		h++;
		a/=10;
	}
	return h;
}
void in(thisinh ds[], int n){
	for(int i=0; i<n; i++){
		if(scs(ds[i].mats)==1){
			cout << "TS0" << ds[i].mats << " " ;
		}
		else if(scs(ds[i].mats)==2){
			cout << "TS" << ds[i].mats << " ";
		}
		
		char check[5][100];
		int h = 0;
		char *token = strtok(ds[i].name," ");
		while(token!=NULL){
			strcpy(check[h],token);
			h++;
			token = strtok(NULL," ");
		}
		for(int i=0; i<h; i++){
			check[i][0] = toupper(check[i][0]);
			for(int j=1; j<strlen(check[i]);j++){
				check[i][j] = tolower(check[i][j]);
			}
		}
		for(int i=0; i<h; i++){
			cout << check[i] << " ";
		}
		cout << fixed << setprecision(1) << ds[i].diem<<" ";
		cout <<ds[i].do_truot<<endl;
	}
	
}
int main(){
	int n;
	cin >> n;
	struct thisinh ds[n];
	nhap(ds,n);
	tinhdiem(ds,n);
	sapxep(ds,n);
	sapxep1(ds,n);
	in(ds,n);
}
