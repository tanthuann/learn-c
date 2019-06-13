#include<stdio.h>
fb(int n)
{
	if (n==2) return 1;
	if (n<=1) return 1;
	else return fb(n-1)+fb(n-2);
}
fbna(int n)		//tinh fbna thu n la so bao nhieu tinh tu n =0
{
	int i,A=0,K=1,S;	
	for(i=1;i<n;i++)
	{		
		S=A+K;
		A=K;
		K=S;
	}
	return S;
}
main()
{
	int n;
	printf("nhap n = "); scanf("%d",&n);
	printf("%d\n",fbna(n));
	printf("%d",fb(n));
}
