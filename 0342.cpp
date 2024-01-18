#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[100001];
		char s1[100001];
		cin >> s;
		strcpy(s1,s);
		long long sum = 0;
		char *token = strtok(s,"MNBVCXZASDFGHJKLPOIUYTREWQ");
		while(token!=NULL){
			char check[100001];
			strcpy(check,token);
			for(int i=0; i<strlen(check); i++){
				sum += check[i]-'0';
			}
			token = strtok(NULL,"MNBVCXZASDFGHJKLPOIUYTREWQ");
		}
		char check1[100001];
		int h = 0;
		for(int i=0; i<strlen(s1); i++){
			if(s1[i]>=65 && s1[i] <=90){
				check1[h] = s1[i];
				h++;
			}
		}
		sort(check1, check1+h);
		for(int i=0; i<h; i++){
			cout << check1[i];
		}
		cout << sum << endl;
	}
}
