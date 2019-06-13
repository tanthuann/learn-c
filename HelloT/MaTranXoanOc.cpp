#include<stdio.h>
#include<stdlib.h>


void xoanoc(int a[][10],int n)
{
	int i;	
	int run=1; 
	int cot=n-1; 
	int hang=n-1; 
	int d=0;
	while(d<=n/2){
		for(i=d;i<=cot;i++)
			a[d][i]=run++;
		for(i=d+1;i<=hang;i++)
			a[i][cot]=run++;
		for(i=cot-1;i>=d;i--)
			a[cot][i]=run++;
		for(i=hang-1;i>d;i--)
			a[i][d]=run++;
		d++;hang--;cot--;			
	}
}

void xuatmang(int a[][10],int n){
	int i,j;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
		{		
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	n=5;
	int a[n][n];
	xoanoc(a[10][10],n);
	xuatmang(a[10][10],n);
	return 0;
}
void nhapn(int &n){
	printf("nhap n ="); scanf("%d",&n);
}

