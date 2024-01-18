#include<bits/stdc++.h>
using namespace std;

void khutrung(int a[], int n){
    for(int i=0; i<n-1; i++){
        if(a[i]!=0){
            for(int j=i+1; j<n; j++){
                if(a[i]==a[j] && a[j] != 0){
                    a[j]=0;
                }
            }    
        }
    }
}
void taphop(int a[], int b[], int n, int m){
	int hop[m+n], h=0;
    for(int i=0; i<n; i++){
		hop[h]=a[i]; h++; 
	}
	for(int i=0; i<m; i++){
		hop[h]=b[i]; h++; 
	}
	khutrung(hop,h);
	for(int i=0; i<h; i++){
		if(hop[i]!=0) cout << hop[i] << " ";
	}
    cout << endl;
	int giao[m]; int h1=0;
    int i=0, j=0;
    while( i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else {
            giao[h1]=a[i];
            h1++;
            i++;j++;
        }
    }
    khutrung(giao,h1);
    for(int z=0; z<h1; z++){
        if(giao[z]!=0){
            cout << giao[z] << " ";   
        }
        
    }
    cout << endl;
    // for(int u=0; u<n; u++){
    //     for(int v=0;v<h;v++){
    //         if(a[u]==giao[v] && giao[v] != 0){
    //             a[u]=0;
    //         }
    //     }
    // }
    // khutrung(a,n);
    // for(int u=0; u<n;u++){
    //     if(a[u]!=0){
    //         cout << a[u] <<" ";
    //     }
    // }
    // cout << endl;
    // for(int u=0; u<m; u++){
    //     for(int v=0;v<h;v++){
    //         if(b[u]==giao[v] && giao[v] !=0){
    //             b[u]=0;
    //         }
    //     }
    // }
    // khutrung(b,m);
    // for(int u=0; u<m;u++){
    //     if(b[u]!=0){
    //         cout << b[u] <<" ";
    //     }
    // }
    // cout << endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n], b[m];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		sort(a,a+n); sort(b,b+m);
		taphop(a,b,n,m);	
	}
}