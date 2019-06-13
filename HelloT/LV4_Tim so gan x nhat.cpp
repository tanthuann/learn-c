#include<stdio.h>
#include<math.h>

main()
{
	int i,n,min;
	float x;
	printf("nhap x:");
	scanf("%f",&x);
	printf("nhap n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("nhap a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]-=x;
		min=a[i];
		if (min>=a[i]);
			min=a[i];
										
	}
	printf("vay so gan nhat la %d:",min);
	
}
