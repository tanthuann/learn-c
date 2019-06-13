#include<stdio.h>
#include<math.h>
int tongbinhphuong(int n);
int main()
{
	int n;
	printf("nhap n ="); scanf("%d",&n);
	printf("Tong binh phuong = %d",tongbinhphuong(n));
	
}
tongbinhphuong(int n){
	if(n<=0)
	return 0;
	else return n*n+tongbinhphuong(n-1);
}

