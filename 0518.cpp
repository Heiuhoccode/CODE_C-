#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	int manv;
	char name[1000];
	char sex[4];
	char dob[100];
	char address[1000];
	long long mst;
	char doc[100];
	
};

void nhap(NhanVien &ds){
	cin.ignore();
	cin.getline(ds.name,1000);
	cin >> ds.sex;
	cin >> ds.dob;
	cin.ignore();
	cin.getline(ds.address,1000);
	cin >> ds.mst;
	cin >> ds.doc;
}

long long tinhtuoi(char check[3][5]){
	int thang = 0;
	int ngay = 0;
	int nam = 0;
	for(int i=0; i<strlen(check[0]); i++){
		thang += (check[0][i]-'0')*pow(10,strlen(check[0])-1-i);
	}
	for(int i=0; i<strlen(check[1]); i++){
		ngay += (check[1][i]-'0')*pow(10,strlen(check[1])-1-i);
	}
	for(int i=0; i<strlen(check[2]); i++){
		nam += (check[2][i]-'0')*pow(10,strlen(check[2])-1-i);
	}
	long long tuoi = thang*30 + ngay + nam*365;
	return tuoi;
}

void sapxep(NhanVien ds[], int N){
	for(int i=0; i<N; i++){
		ds[i].manv = i+1;
	}
	int tuoi[N];
	for(int i=0; i<N; i++){
		char check[3][5];
		int h = 0;	
		char check1[100];
		strcpy(check1,ds[i].dob);
		char *token = strtok(ds[i].dob, "/");
		while(token!=NULL){
			strcpy(check[h],token);
			h++;
			token=strtok(NULL,"/");
		}
		tuoi[i] = tinhtuoi(check);
		strcpy(ds[i].dob,check1);
	}
	bool ascending;
	do{
		ascending = false;
		for(int i=1; i<N; i++){
			if(tuoi[i-1] > tuoi[i]){
				swap(tuoi[i-1],tuoi[i]);
				struct NhanVien temp = ds[i-1];
				ds[i-1] = ds[i];
				ds[i] = temp;
				ascending = true;
			}
		}
	}while(ascending);
}

int scs(int a){
	int h = 0;
	while(a>0){
		h++;
		a/=10;
	}
	return h;
}

void inds(NhanVien ds[], int N){
	for(int i=0;i<N;i++){
		if(scs(ds[i].manv)==1){
			cout << "0000" << ds[i].manv << " ";
		}
		else if(scs(ds[i].manv)==2){
			cout << "000" << ds[i].manv << " ";
		}
		else if(scs(ds[i].manv)==3){
			cout << "00" << ds[i].manv << " ";
		}
		else if(scs(ds[i].manv)==4){
			cout << "0" << ds[i].manv << " ";
		}
		else if(scs(ds[i].manv)==5){
			cout << ds[i].manv << " ";
		}
		cout << ds[i].name << " ";
		cout << ds[i].sex << " ";
		cout << ds[i].dob << " ";
		cout << ds[i].address << " ";
		cout << ds[i].mst << " ";
		cout << ds[i].doc << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
