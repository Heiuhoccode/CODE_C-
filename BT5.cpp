#include<bits/stdc++.h>

using namespace std;

struct xe{
	char bien[100];
	char loai[100];
	int ghe;
	char di[4];
	char date[100];
};

int main(){
	int n;
	cin >> n;
	struct xe arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i].bien >> arr[i].loai >> arr[i].ghe >> arr[i].di >> arr[i].date;
	}
	char ngay[n];
	int h = 0;
	for(int i=0; i<n-1; i++){
		if(strcmp(arr[i].date,"a")!=0 ){
			strcpy(ngay[h],arr[i].date);
			for(int j=i+1; j<n; j++){
				if(strcmp(arr[i].date,arr[j].date)==0){
					strcpy(arr[i].date, "a");
				}
			}
			h++;
		}
	}
	for(int i=0; i<h; i++){
		cout << ngay[i] << endl;
	}
}
