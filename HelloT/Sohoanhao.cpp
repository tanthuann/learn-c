#include<stdio.h>

int sohoanhao(int);
void nhapn(int &);
void xuatsohoanhao(int);


main()
{
	int n,i;
	nhapn(n);
	printf("Cac so hoan hao 1 den %d la : ",n);
	xuatsohoanhao(n);
	
}
int sohoanhao(int n){
	int tong=0,i;
	for(i=1;i<n;i++)
		if(n%i==0)	tong+=i;		
	if(tong==n)	return 1;
	else return 0;
}
void nhapn(int &n){
	printf("nhap n ="); scanf("%d",&n);
}
void xuatsohoanhao(int n){
	int i;
	for(i=1;i<=n;i++){
		if (sohoanhao(i)==1)
		printf("%d\t",i);
	}		
}

