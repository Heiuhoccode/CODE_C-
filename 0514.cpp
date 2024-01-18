#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	char masv[12]="B20DCCN";
	int soma;
	char name[1000];
	char clas[1000];
	char dob[1000];
	float GPA;
};
void nhap(SinhVien ds[], int N){
	ds[0].soma = 1;
	for(int i=1; i<N; i++){
		ds[i].soma = i+1;
	}
	for(int i=0; i<N; i++){
		cin.ignore();
		cin.getline(ds[i].name,1000);
		cin >> ds[i].clas;
		cin >> ds[i].dob;
		cin >> ds[i].GPA;	
	}
}

int scs(int a){
	int h = 0;
	while(a>0){
		a/=10;
		h++;
	}
	return h;
}

void sapxep(SinhVien ds[], int N){
	bool unascending;
	do{
		unascending = false;
		for(int i=1;i<N;i++){
			if(ds[i-1].GPA < ds[i].GPA){
				struct SinhVien temp = ds[i-1];
				ds[i-1] = ds[i];
				ds[i] = temp;
				unascending = true;
			}
		}
	}while(unascending);
}

void in(SinhVien ds[], int N){
	
	
	
	
	for(int i=0; i<N; i++){
		cout << ds[i].masv;
		if(scs(ds[i].soma)==1){
			cout << "00" << ds[i].soma;
		}
		else if(scs(ds[i].soma)==2){
			cout << "0" << ds[i].soma;
		}
		cout << " ";
		
		
		
		
		char check1[100][100];
		int h1 = 0;
		char *token1 = strtok(ds[i].name," ");
		while(token1!=NULL){
			strcpy(check1[h1],token1);
			h1++;
			token1 = strtok(NULL," ");
		}
		for(int j=0; j<h1; j++){
			for(int x=0;x<strlen(check1[j]);x++){
				check1[j][x]=tolower(check1[j][x]);
			}
		}
		for(int j=0; j<h1; j++){
			check1[j][0]=toupper(check1[j][0]);
		}
		for(int j=0; j<h1; j++){
			cout << check1[j] << " ";
		}		
		
		
		
		
		cout << ds[i].clas << " ";
		
		int h=0;
		char check[3][5];
		char *token = strtok(ds[i].dob, "/");
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
		
		
		cout << fixed << setprecision(2) << ds[i].GPA;
		cout << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}
