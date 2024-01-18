#include<bits/stdc++.h> 
using namespace std; 
#define ll 
long long int check() { int n; cin>>n; int a[n]; map<int,int>mp; for(int i=0; i<n; i++) { cin>>a[i]; } for(int i=0; i<n; i++) { mp[a[i]]++; if(mp[a[i]]==2) return a[i]; } return -1; } int main() { int t; cin>>t; while(t--) { cout<<check(); cout<<endl; } }
