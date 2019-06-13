#include<stdio.h>
int giaithua1(int n)
{
	if(n<=1) return 1; 
	else {
		return n*giaithua1(n-1);
	}
}
int giaithua2(int n)
{
	int i,S=1;
	for(i=1;i<=n;i++)
	{
		S=S*i;
	}
	printf("Giai thua cua %d = %d",n,S);
	
}
main()
{
	int n;
	printf("nhap n = "); scanf("%d",&n);
	printf("Giai thua cua %d = %d\n",n,giaithua1(n));
	giaithua2(n);
}
