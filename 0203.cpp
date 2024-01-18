#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int  N;
        cin >> N;
        int A[N];
        for(int i=0; i<N; i++){   
            cin >> A[i];
        }
        int check[1000000];
        for(int i=1; i<1000000; i++){
            check[i]=0;
        }
        for(int i=0; i<N; i++){
            if(A[i]>0){
                check[A[i]]=1;
            }
        }
        for(int i=1; i<1000000; i++){
            if(check[i]==0){
                cout << i;
                break;
            }
        }
        cout << endl;
	}
}
