#include<stdio.h>
int giaithua1(int x)
{
	 if(x<=1) return 1;
	else return x*giaithua1(x-1);
}
int giaithua2(int n)
{
	int i,P=1;
	for(i=1;i<=n;i++)
	{
		P=P*i;
	}
	return P;
}
int main()
{
	int n,k,x,chinhhop;
	printf("nhap n ="); scanf("%d",&n);
	printf("nhap k ="); scanf("%d",&k);
//	x=giaithua1(n-k);
//	n=giaithua1(n);
//	k=giaithua1(k);	
//	chinhhop=n/(k*x);
//	printf("chinh hop = %d\n",chinhhop);
//	
	x=giaithua2(n-k);
	n=giaithua2(n);
	k=giaithua2(k);	
	chinhhop=n/(k*x);
	printf("chinh hop = %d",chinhhop);
}
//C=n!/(k!*(n-k)!)


