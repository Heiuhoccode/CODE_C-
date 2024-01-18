#include<bits/stdc++.h>

using namespace std;

const int MAXLIST = 10000;

struct s{
	int n;
	int nodes[MAXLIST];
};
int main(){
	struct s ds;
	cin >> ds.n;
	int a[ds.n];
	for(int i=0; i<ds.n; i++){
		cin >> a[i];
	}
	for(int i=0; i<ds.n-1; i++){
		if(a[i]!=-1){
			int dem=0;
			cout << a[i] << " ";
			for(int j=i+1; j<ds.n; j++){
				if(a[i]==a[j] && a[j] != -1){
					dem++;
					a[j]=-1;
				}
			}
			cout << dem+1 << endl;
		}
	}
}

