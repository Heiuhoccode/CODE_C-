#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; cin.ignore();
    while(t--){
        string nb;
        cin >> nb;
        int dem=1;
        while(nb.find("100")<nb.size()){
            int h=nb.find("100");
            for(int i=0; i<3; i++){
                nb[i+h]='2';
                
            }
        }
        while(dem>0){
            dem=0;
            for(int i=0; i<nb.size();i++){
                int dem1=0;
                if(nb[i]=='2'||nb[i]=='0') continue;
                int b,c,d;
                b=i;
                int j=i+1;
                while(nb[j]=='2'){
                    j++;
                }
                if(nb[j]=='0'){
                    c=j;
                    int j1=j+1;
                    while(nb[j1]=='2'){
                        j1++;
                    }
                    if(nb[j1]=='0'){
                        d=j1;
                        dem1=1;
                    } 
                }
                if(dem1==1){
                    //cout << b << " "<<c<<" "<<d<<endl;
                    nb[b]='2';nb[c]='2';nb[d]='2';
                    dem=1;
                }
            }    
        }
        int max=0;int cnt=0;
        for(int i=0; i<nb.size();i++){
            if(nb[i]=='2'){
                cnt++;
            }
            if(nb[i]!='2' || i==nb.size()-1) {
                if(max < cnt) {max=cnt;}
                cnt=0;
            }
        }
        //cout << nb<< endl;
        cout << max << endl;
    }
}