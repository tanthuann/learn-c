#include<stdio.h>
main()
{
	int n;
	int i,dem=0;
	printf("nhap n = "); scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		dem++;
	}
	if(dem==2)
	{
	printf("%d la so nguyen to",n);}
	else
	printf("%d khong phai la so nguyen to",n);
	
}
