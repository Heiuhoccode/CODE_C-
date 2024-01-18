#include<bits/stdc++.h>

using namespace std;

struct human{
	char name[100];
	char dob[100];
	long long tuoi;
};

void nhap(human ds[], int n){
	for(int i=0; i<n; i++){
		cin >> ds[i].name;
		cin >> ds[i].dob;
	}
}

long long tinhtuoi(char check[3][5]){
	int thang = 0;
	int ngay = 0;
	int nam = 0;
	for(int i=0; i<strlen(check[0]); i++){
		ngay += (check[0][i]-'0')*pow(10,strlen(check[0])-1-i);
	}
	for(int i=0; i<strlen(check[1]); i++){
		thang += (check[1][i]-'0')*pow(10,strlen(check[1])-1-i);
	}
	for(int i=0; i<strlen(check[2]); i++){
		nam += (check[2][i]-'0')*pow(10,strlen(check[2])-1-i);
	}
	long long tuoi = thang*30 + ngay + nam*365;
	return tuoi;
}

void in(human ds[], int N){
	int tuoi[N];
	for(int i=0; i<N; i++){
		char check[3][5];
		int h = 0;	
		char *token = strtok(ds[i].dob, "/");
		while(token!=NULL){
			strcpy(check[h],token);
			h++;
			token=strtok(NULL,"/");
		}
		tuoi[i] = tinhtuoi(check);
	}
	bool ascending;
	do{
		ascending = false;
		for(int i=1; i<N; i++){
			if(tuoi[i-1] > tuoi[i]){
				swap(tuoi[i-1],tuoi[i]);
				struct human temp = ds[i-1];
				ds[i-1] = ds[i];
				ds[i] = temp;
				ascending = true;
			}
		}
	}while(ascending);
	cout << ds[N-1].name << endl << ds[0].name << endl;
}

int main(){
	int n;
	cin >> n;
	struct human ds[n];
	nhap(ds,n);
	in(ds,n);
}

