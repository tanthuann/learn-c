#include<stdio.h>
#include<math.h>
main()
{ 
	float n;
	printf("nhap mot so ="); scanf("%f",&n);
	if((n-0.5)/int(n)==1)
	printf("%.1f la so ban nguyen",n);
	else
	printf("%.1f khong phai so ban nguyen",n);
}

