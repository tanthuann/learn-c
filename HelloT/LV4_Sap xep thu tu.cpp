#include<stdio.h>

main()
{
	int n,i,j,t;
	printf("nhap n:");
	scanf("%d",&n);	
	int a[n];	
	for (i=0;i<n;i++)	
	{
		printf("nhap a[%d]:",i);
		scanf("\n%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
		{				
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
			
		}	
	}
	for (i=0;i<n;i++)	
				printf("%d-",a[i]);			
	return 0;
}
