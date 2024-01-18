#include<bits/stdc++.h>

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

void result(string s, int k){
	int dem=0;
	for(int i=0; i<s.size(); i++){
		int tu[27]={0};
		int cnt=0;
		for(int j=i; j<s.size();j++){
			if(tu[s[j]-'a']==0){
				tu[s[j]-'a']=1;
				cnt++;
			}
			if(cnt==k){
				dem++;
			}
			else if(cnt>k){
				break;
			}
		}
		
	}
	cout << dem << endl;
}

int main (){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		result(s,k);
	}
}
