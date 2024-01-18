#include<bits/stdc++.h>
using namespace std;
int snt(int a){
    if(a<2) return 0;
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int main(){
    int t;cin >> t;
    for(int test=1; test<=t; test++){
        int n; cin >> n;
        cout << "Test "<<test<<":"<<endl;
        int B[n][n];
        int A[n*n];
        int cnt = 2, tmp =0;
        while(tmp < n*n){
            if(snt(cnt)==1){
                A[tmp] = cnt;
                tmp++;
            }
            cnt++;
        }
        int k=0;
		int row = 0;
		int column = 0;
		while(k<(n*n)){
			for(int j=column; j<n-column; j++){
				B[row][j] = A[k];
				k++;
			}
			if(k==n*n){
				break;
			}
			for(int i=row+1; i<n-row; i++){
				 B[i][n-column-1]= A[k];
				k++;
			}
			if(k==n*n){
				break;
			}
			for(int j=n-column-2; j>=column; j--){
				B[n-row-1][j]=A[k]  ;
				k++;
			}
			if(k==n*n){
				break;
			}
			for(int i=n-row-2; i>=row+1; i--){
				 B[i][column]=A[k] ;
				k++;
			}
			if(k==n*n){
				break;
			}
			row++;
			column++;
		}
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << B[i][j]<<" ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}