#include<bits/stdc++.h>

using namespace std;

// Ham kiem tra so nguyen to.
int snt(int a){
	if(a<2) {return 0;}
	for(int i=2; i<=sqrt(a); i++) {if(a%i==0) {return 0;}}
	return 1;}

// kiem tra duong cheo chinh va hai cot thu 4,5.
int duongcheo_cot(int a[5][5],int S){
	int DCC = 0, dc = 0,COT4 = 0,COT5 = 0,cot4 = 0,cot5 = 0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){if(i==j){DCC+=a[i][j]*pow(10,5-i-1);dc+=a[i][j];}}}
	for(int i=0; i<5; i++){
	COT4+=a[i][3]*pow(10,5-i-1);COT5+=a[i][4]*pow(10,5-i-1);cot4+=a[i][3];cot5+=a[i][4];}
	if(snt(DCC)==1&&dc==S&&snt(COT4)==1&&snt(COT5)==1&&cot4==S&&cot5==S){return 1;}
	return 0;}
// Ham tinh tong cac chu so.
int tong(int a){int sum = 0;
	while(a>0) {int h = a%10;sum += h;a/=10;}
	return sum;}


int main(){
	int a[5][5]; // Khai bao mang hai chieu a tuong duong 25 o vuong.
	int S; // Khai bao tong S.
	do{
		cout<<"Nhap so S tu ban phim la: ";
		cin>>S; // Nhap S tu ban phim.
		if(S>=45){cout << "Khong hop le. Vui long nhap lai." << endl;}		
	}while(S>=45);
	int index = 0; // Khai bao so luong so nguyen to co 5 chu so, gan bang 0.
	int b[89999][5]; // Khai bao mang b chua cac so nguyen to co 5 chu so theo tung hang.
	/* Kiem tra cac so nguyen to co 5 chu so.
	luu cac so nguyen to vao mang b. */
	for(int i=10001; i<=99999; i++) {
		if(snt(i)==1 && tong(i) == S) {int k=4, d = i;
			while(d>0) {int h = d%10;b[index][k] = h;k--;d/=10;}
			index++;}}
	
	int lenc = 0;
	int c[10000][5];
	int soluong=0,x1=0;
	while(x1<index){
	if(b[x1][0]!=0&&b[x1][1]!=0&&b[x1][2]!=0&&b[x1][3]!=0&&b[x1][4]!=0){
	for(int i=0;i<5;i++) {a[0][i]=b[x1][i];}
	int x2=0;
	while(x2<index){
	if(a[0][0]==b[x2][0]&&b[x2][0]!=0&&b[x2][1]!=0&&b[x2][2]!=0&&b[x2][3]!=0&&b[x2][4]!=0){
	for(int i=0;i<5;i++) {a[i][0]=b[x2][i];}
	int x3=0;
	while(x3<index){
	if(a[0][4]==b[x3][0]&&a[4][0]==b[x3][4]) {
	for(int i=0;i<5;i++) {a[i][5-1-i]=b[x3][i];}
	int x4=0;
	while(x4<index) {
	if(a[1][0]==b[x4][0]&&a[1][3]==b[x4][3]) {
	for(int i=0;i<5;i++) {a[1][i]=b[x4][i];}
	int x5=0;
	while(x5<index) {
	if(a[0][1]==b[x5][0]&&a[1][1]==b[x5][1]&&a[3][1]==b[x5][3]) {
	for(int i=0;i<5;i++) {a[i][1]=b[x5][i];}
	int x6=0;
	while(x6<index) {
	if(a[2][0]==b[x6][0]&&a[2][1]==b[x6][1]&&a[2][2]==b[x6][2]) {
	for(int i=0;i<5;i++) {a[2][i]=b[x6][i];}
	int x7=0;
	while(x7<index) {
	if(a[0][2]==b[x7][0]&& a[1][2]==b[x7][1]&& a[2][2]==b[x7][2]) {
	for(int i=0;i<5;i++) {a[i][2]=b[x7][i];}
	int x8=0;
	while(x8<index) {
	if(a[3][0]==b[x8][0]&&a[3][1]==b[x8][1]&&a[3][2]==b[x8][2]) {
	for(int i=0;i<5;i++) {a[3][i]=b[x8][i];}
	int x9=0;
	while(x9<index) {
	if(a[4][0]==b[x9][0]&&a[4][1]==b[x9][1]&&a[4][2]==b[x9][2]) {
	for(int i=0;i<5;i++) {a[4][i]=b[x9][i];}
	if(duongcheo_cot(a,S)==1) {soluong++;
		for(int i=0;i<5;i++) {for(int j=0;j<5;j++){c[lenc][j]=a[i][j];}lenc++;}
		break;
	}else x9++;}else x9++;}x8++;}else x8++;}x7++;}else x7++;}x6++;}else x6++;}x5++;} 
	else x5++;}x4++;} else x4++;}x3++;} else x3++;}x2++;}else x2++;}x1++;}else x1++;}
	cout << "Tong tat ca cac truong hop thoa man la: "<< soluong << endl;
	if(S==17){
		cout << "5 cau hinh dau tien la:\n"<<endl;
		for(int i=0; i<25; i++){for(int j=0; j<5; j++){cout<<c[i][j]<<" ";}cout << endl;
			if((i+1)%5==0){cout << endl;}}
	}
	else{
		cout << "Tat ca cac cau hinh la:\n" << endl;
		for(int i=0;i<lenc;i++){for(int j=0;j<5;j++){cout<<c[i][j]<<" ";}cout << endl;
			if((i+1)%5==0){cout << endl;}}
	}
	return 0;
}				
			
		
	
	

