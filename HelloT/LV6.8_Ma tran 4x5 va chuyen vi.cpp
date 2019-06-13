#include<stdio.h>

main()
{
	int i,j;
	int a[4][5];
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("nhap a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("%d  ",a[i][j]);
			
		}
		printf("\n");
	}
	for (j=0;j<5;j++)
	{
		for (i=0;i<4;i++)
		{
			printf("%d  ",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
