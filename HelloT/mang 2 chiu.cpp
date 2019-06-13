#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=2,m=3,i,j;
	int S=0;
	int a[n][m];
	
	for(i=0;i<=n;i++)
		{
			for(j=0;j<=m;j++)
			{
				printf("nhap a[%d][%d]:",i,j);
				scanf("%d",&a[i][j]);
				S=S+a[i][j];
			}
		}
	
	printf("Vay S =	%d",S);
	return 0;
}

