#include<stdio.h>
#include<math.h>
main()
{ 
	int n;
	float S;
	printf("nhap mot so ="); scanf("%d",&n);
	S=sqrt(n);	
	if(S==int(S))
	printf("%d la so chinh phuong",n);
	else printf("%d khong phai so chinh phuong",n);
}
