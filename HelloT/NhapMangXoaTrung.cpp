#include<stdio.h>

void nhapmang(int [],int &);
void xuatmang(int [],int);
void huy(int [],int &,int);
void xoatrung(int [],int &);

main(){
	int a[100],n;
	nhapmang(a,n);
	xuatmang(a,n);
	xoatrung(a,n);
	printf("\n");
	xuatmang(a,n);
 	
}
void nhapmang(int a[], int &n){
	int i;
	printf("nhap so phan tu trong mang la : "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("A[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

void xuatmang(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void xoatrung(int a[],int &n){
	int i,j;
	for(i=0;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]==a[j])
			huy(a,n,j);	
	
	
						
}

void huy(int a[],int &n,int p){
	int i;
	for(i=p;i<=n;i++){
		
		a[i]=a[i+1];
		
			
	}
	n--;
	
}
