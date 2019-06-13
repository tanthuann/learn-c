#include<stdio.h>
void mt(int a[][100],int n);
void xmt(int a[][100],int n);
void mindong(int [],int a[][100],int);
void maxcot(int [],int a[][100],int);


main(){
	int n,i;
	printf("nhap n = "); scanf("%d",&n);
	int a[100][100];
	int b[100];
	int c[100];
	mt(a,n);
	xmt(a,n);
	mindong(b,a,n);
	printf("%d\n",c[0]);
	maxcot(c,a,n);
	for(i=0;i<n;i++){
		if(b[i]=c[i]){
			printf("%d",b[i]);
			goto abc;
		}		
	}
	printf("khong co");
	abc:
		return 0;
	
}
void mt(int a[][100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("nhap a[%d][%d] = ",i,j); scanf("%d",&a[i][j]);
		}
	}
}

void xmt(int a[][100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}

void mindong(int b[100],int a[][100],int n){
	int i,j=0,min;
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			
			if(min>a[i][j])
				min=a[i][j];
		}
		b[i]=min;
		min=1000;
	}
}

void maxcot(int c[100],int a[][100],int n){
	int i,j=0,max;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
						
			if(max<a[j][i])
				max=a[j][i];
		}
		c[i]=max;
		max=0;		
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
