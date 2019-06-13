#include<stdio.h>

main()
{
	int k,n,i;
	printf("nhap n=");
	scanf("%d",&n);
	printf("nhap so k=");
	scanf("%d",&k);
	for(i=0;i<=n;i++)
	{
		if (i%k==0)
			printf("\nso %d chia het cho %d",i,k);
	}
	return 0;
	
}
