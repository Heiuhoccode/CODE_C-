#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	char masv[1000]="N20DCCN001";
	char name[1000];
	char clas[1000];
	char date[1000];
	float gpa;
};

void nhapThongTinSV(SinhVien &a){
	cin.getline(a.name, 1000);
	cin >> a.clas;
	cin >> a.date;
	cin >> a.gpa;
	
	
}

void inThongTinSV(SinhVien a){
	cout << a.masv << " ";
	cout << a.name << " ";
	cout << a.clas << " ";
	int h=0;
	char check[3][5];
	char *token = strtok(a.date, "/");
	while(token!=NULL){
		strcpy(check[h],token);
		h++;
		token = strtok(NULL,"/");
	}
	for(int i=0; i<2; i++){
		if(strlen(check[i])==1){
			cout << "0" << check[i];
		}
		else{
			cout << check[i];
		}
		cout << "/";
	}
	cout << check[2] << " ";
	cout << fixed << setprecision(2) << a.gpa;
}


int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
