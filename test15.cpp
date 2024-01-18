#include <bits/stdc++.h>

using namespace std;

int main(){
	string name ;
    getline(cin, name);
	stringstream ss(name);
	vector <string> v;
    string word;
	while(ss >> word){
		v.push_back(word);
	}
	string hodem="", ten;
    ten = v[v.size()-1];
    for(int i=0; i<v.size()-1; i++){
        hodem += v[i];
        hodem += " ";
    }
    cout << "Ten la: " << ten << endl;
    cout << "Ho dem la: "<< hodem << "A"<< endl;
}