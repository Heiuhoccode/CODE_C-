#include<bits/stdc++.h>

using namespace std;

struct TTS{
	int stt;
	string masv;
	string name;
	string clas;
	string email;
	string concern;
};

void nhap(TTS ds[], int n){
	for(int i=0; i<n; i++){		
		ds[i].stt = i+1;
	}
	cin.ignore();
	for(int i=0; i<n; i++){
		getline(cin ,ds[i].masv);
		getline(cin,ds[i].name);
		getline(cin ,ds[i].clas);
		getline(cin,ds[i].email);
		getline(cin,ds[i].concern);
	}
}

void result(TTS ds[], string questions[], int n, int m){
	for(int i=0; i<m; i++){
        string dn;
        getline(cin,dn);
		for(int j=0; j<n; j++){
			if(dn==ds[j].concern){
				cout << ds[j].stt << " ";
				cout << ds[j].masv << " ";
				cout << ds[j].name << " ";
				cout << ds[j].clas << " ";
				cout << ds[j].email << " ";
				cout << ds[j].concern <<endl; 	
			}
		}	
	}
}

bool cmp(TTS a, TTS b){
	if(a.name > b.name) return 0;
	return 1;
}

void sapxep(TTS ds[], int n){
	//sort(ds, ds+n, cmp);
	bool ascending;
	do{
		ascending = false;
		for(int i=1; i<n; i++){
			if(ds[i-1].name>ds[i].name){
				swap(ds[i-1],ds[i]);
				ascending = true;
			}
		}
	}while(ascending);
}

int main(){
	int n;
	cin >> n;
	struct TTS ds[n];
	nhap(ds,n);
	sapxep(ds,n);
	int m;
	cin >> m;
	cin.ignore();
	string questions[m];
	result(ds,questions,n,m);
}
