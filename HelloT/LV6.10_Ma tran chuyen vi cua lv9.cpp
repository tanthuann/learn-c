#include<stdio.h>

main()
{
	int i,j,t=0;
	int a[5][5];
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			t++;
			a[i][j]=t;
									
		}
	}
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			printf("%d ",a[i][j]);					
		}
		printf("\n");
	}
	return 0;
}
