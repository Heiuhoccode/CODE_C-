#include<bits/stdc++.h>

using namespace std;

int main(){
	char a;
	ifstream op("PTIT.in");
	ofstream wr("PTIT.out");
	while(op.get(a)){
		wr << a;
	}
	op.close();
	wr.close();
}
