#include<stdio.h>

main()
{
	int n,S=0;
	while (n!=0)
	{
		
		printf("nhap n:");
		scanf("%d",&n);
		S+=n;	
	}
	printf("Vay cac so co tong la: %d",S);
	return 0;
}
