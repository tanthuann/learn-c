#include<stdio.h>

int snt(int);
void xuatsnt(int);
int tongsnt(int);

main(){
	int n;
	printf("nhap n = "); scanf("%d",&n);
	xuatsnt(n);
	printf("\nTong snt = %d",tongsnt(n));
	
}

int snt(int n){
	int i,dem=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==2) return 1;
	else return 0;
}
void xuatsnt(int n){
	int i;
	printf("Cac snt tu 1 den %d la ",n);
	for(i=1;i<n;i++){
		if(snt(i)==1)	printf("\t%d",i);
	}
}
int tongsnt(int n){
	int tong=0,i;
	for(i=0;i<n;i++)
		if(snt(i)==1)	tong+=i;
	return tong;
}

