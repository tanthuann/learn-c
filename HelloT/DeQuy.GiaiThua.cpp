#include<stdio.h>
int gt(int n)
{
	if (n==1) return 1;
	else return n*gt(n-1);
}
int main()
{
	int n;
	printf(" nhap n = "); scanf("%d",&n);
	printf("gia tri cua giai thua %d = %d",n,gt(n));
}
