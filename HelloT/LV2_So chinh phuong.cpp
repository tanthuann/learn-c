#include<stdio.h>
#include<math.h>

main()
{
	int n;
	printf("nhap mot so nguyen:");
	scanf("%d",&n);
	if (sqrt(n)==(int)sqrt(n))
		printf("%d la so chinh phuong",n);
	else printf("%d khong phai so chinh phuong",n);
	return 0;
}
