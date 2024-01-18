#include<bits/stdc++.h>

using namespace std;

struct MonHoc{
	string ma;
	string name;
	friend istream &operator >> (istream &a, MonHoc &mh){
		a >> mh.ma >> ws;
		getline(a, mh.name);
		return a;
	}
};

struct LichThi{
	int macathi=0;
	string ma;
	string ngay;
	string gio;
	string nhom;
	friend istream &operator >>(istream &a, LichThi &lt){
		a >> lt.ma >> lt.ngay >> lt.gio >> lt.nhom;
		return a;
	}
	friend bool operator <(MonHoc a,LichThi &b){
		b.name = a.name;
	}
	friend bool operator <(const LichThi &a, const LichThi &b){
		if(a.ngay != b.ngay){
			return a.ngay > b.ngay;	
		}
		else{
			if(a.gio != b.gio){
				return a.gio > b.gio;	
			}
			else return a.ma > b.ma;	
		}
		
	}
	friend ostream &operator << (ostream &a, const LichThi &lt){
		a <<" " << lt.ma <<" "<<lt.name<<" "<<lt.ngay<<" "<<lt.gio<<" "<<lt.nhom << endl;
		return a;
	}
};
void process(MonHoc mh[], int n, LichThi lt[] ,int m){
	sort(lt,lt+m);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}
