#include<stdio.h>
main()
{
	int i,j,n;
	printf("nhap n = "); scanf("%d",&n);
	int a[n][n];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("nhap a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
