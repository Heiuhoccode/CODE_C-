#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
struct Patient{
	char Name[100];
	char Id[100];
	char TOI;
	int Days;
	int Smoney;
	int Fee;
};
int N;
void scan(){
	scanf("%d",&N);
}
struct Patient a[100];
void scan1(){
	for(int i=0;i<N;i++){
		scanf("\n");
		gets(a[i].Name);
		gets(a[i].Id);
		scanf("%c",&a[i].TOI);
		scanf("%d",&a[i].Days);
		scanf("%d",&a[i].Smoney);
		if(a[i].Smoney<=3000000){
			a[i].Days = 0;
		}
	}
}
void task(){
	for(int i=0;i<N;i++){
		int fee = a[i].Smoney + a[i].Days * 200000;
		if(fee < 3000000){
			if(a[i].TOI=='K'){
				a[i].Fee = fee;
			}
			else if(a[i].TOI=='T'){
				a[i].Fee = fee/2;
			}
			else if(a[i].TOI=='C'){
				a[i].Fee = 0;
			}
		}
		else if(fee > 3000000){
			if(a[i].TOI=='K'){
				a[i].Fee = fee;
			}
			else if(a[i].TOI=='T'){
				a[i].Fee = fee*7/10;
			}
			else if(a[i].TOI=='C'){
				a[i].Fee = fee*3/10;
			}
		}
	}
}
void sapxep(){
	bool giamdan ;
	do{
		giamdan = false;
		for(int i=1;i<N;i++){
			if(a[i-1].Fee<a[i].Fee){
				struct Patient term = a[i-1];
				a[i-1] = a[i];
				a[i] = term;
				giamdan = true;
			}
		}
	}while(giamdan);
}
void print(){
	for(int i=0;i<N;i++){
		printf(" Ten benh nhan: %s\n Ma benh nhan: %s\n Loai bao hiem: %c\n So ngay: %d\n Tien phau thuat: %d\n Vien phi: %d\n",a[i].Name,a[i].Id,a[i].TOI,a[i].Days,a[i].Smoney,a[i].Fee);
	}
}
int main(){
	scan();
	scan1();
	task();
	sapxep();
	print();
}
