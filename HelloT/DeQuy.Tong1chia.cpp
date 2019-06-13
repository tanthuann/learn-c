#include<stdio.h>
float tinhtong(float n); //1/n.(n+1)
main(){
	int n;
	printf("Nhap n ="); scanf("%d",&n);
	printf("Tong bieu thuc la %f",tinhtong(n));
}
float tinhtong(float x){
	if(x==1)
		return 1/2.0;
	else return (tinhtong(x-1)+1/(x*(x+1)) );
}
