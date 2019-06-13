#include<stdio.h>

main()
{
	int n,i,min;
	printf("nhap n:");
	scanf("%d",&n);	
	float a[n];
	
	for (i=0;i<n;i++)	
	{
		printf("nhap a[%f]:",i);
		scanf("\n%f",&a[i]);
	}
	min=a[1];
	for (i=0;i<n;i++)
	{	
		if (min>=a[i])
		{		
			min=a[i];
	}
}
	printf("vay min la : %f",min);

}
