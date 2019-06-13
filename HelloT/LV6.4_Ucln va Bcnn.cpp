#include<stdio.h>
#include<math.h>

main()
{
	int n,m,k;
	printf("nhap n=");
	scanf("%d",&n);
	printf("nhap m=");
	scanf("%d",&m);
	if(n>m)
	{
	if(n%m==0)
	{
		k=n/m;		
		printf("%d la ucln\n",k);
		printf("%d la bcnn\n",n);
	}
	else 
	{
	k=n*m;
	printf("%d la ucln\n",n);
	printf("%d la bcnn\n",k);
	
}
	
		
}
}
