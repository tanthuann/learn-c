#include<stdio.h>

main()
{
	int i,n,dem=0;
	printf("nhap n=:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i%2==0)
			dem++;
	}
	printf("co tat ca %d so chan",dem);
}
