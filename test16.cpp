#include<bits/stdc++.h>
#include<vector>
using namespace std;
int sotu(string a){
	map<char,int> dem;
	for(int i=0; i<a.size(); i++){
		dem[a[i]]++;
	}
	int cnt=0;
	for(int i=0; i<a.size(); i++){
		if(dem[a[i]]>0){
			cnt++;
			dem[a[i]]=0;
		}
	}
	return cnt;
}
int main(){
	int a[4]={0};
	for(int i=0; i<4; i++){
		cout << a[i];
	}
}
