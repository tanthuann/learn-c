#include<stdio.h>

int main()
{
	int m,n,i;
	printf("nhap n:");
	scanf("%d",&n);
	printf("nhap m:");
	scanf("%d",&m);
	while (n<=m)
		{
			if (n%2==1)
			{
			i++;
			n++;
			}
			else n++;
		}
		printf("vay co %d so le",i);
		return 0;
		
}
