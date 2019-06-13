#include<stdio.h>
int csc1(int d, int n){	
	int i,S=0;
	for(i=1;i<=n;i++)
	{
		S=S+d*i;
	}
	return S;
}
int csc2(int d,int n){
	int S=0;
	if (n==0) return 0;
	else
	{				
		return 
	}
		
		
}
int main()
{
	int n,d;
	printf("So phan phan tu can cong : "); scanf("%d",&n);
	printf("Nhap cong sai d = "); scanf("%d",&d);
	printf("Tong %d phan tu dau tien cua cap so cong co cong sai d la %d = %d\n",n,d,csc1(d,n));
	printf("Tong %d phan tu dau tien cua cap so cong co cong sai d la %d = %d",n,d,csc2(d,n));
}

