#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	char manv[1000];
	char name[1000];
	char sex[100];
	char dob[1000];
	char address[1000];
	char mst[11];
	char doc[1000];
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
void result(char a[]){
	int du = 0;
	char b[6]="00001";
	for(int i=strlen(a)-1; i>=0; i--){
		b[i] += du;
		if((a[i]+b[i]-48)>57){
			a[i] = a[i] + b[i] - 58;
			du = 1;
		}
		else{
			a[i] = a[i] + b[i] - 48;
			du = 0;
		}
	}
}
void inds(NhanVien ds[], int N){
	strcpy(ds[0].manv,"00001");
	for(int i=1; i<N; i++){
		strcpy(ds[i].manv,ds[i-1].manv);
		result(ds[i].manv);
	}
	for(int i=0; i<N; i++){
		cout << ds[i].manv <<" "<< ds[i].name << " "<< ds[i].sex << " " << ds[i].dob<<" "<< ds[i].address<<" "<< ds[i].mst<<" "<< ds[i].doc<< endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
