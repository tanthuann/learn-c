#include<stdio.h>
#include<math.h>

main()
{
	int n,i,j,dem,demlannua=0;
	printf("nhap n=");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		
		dem=0;
		for (j=1;j<=i;j++)
		{				
			if (i%j==0)
				dem++;			
		}
		if (dem==2)
			demlannua++;
		
		printf("%d",demlannua);
		
	}
}

