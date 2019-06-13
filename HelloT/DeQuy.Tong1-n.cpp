#include<stdio.h>		
int tong(int n)
{
	if (n<=0) return 0;
	else{
		return n+tong(n-2);
	}
}
int main()
{
	int n;
	printf("nhap n ="); scanf("%d",&n);
	printf(" ket qua = %d",tong(n));
}
