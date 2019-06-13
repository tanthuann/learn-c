#include<stdio.h>
void nhapmang(int a[],int n);
void xuatmang1(int [],int n);
void xuatmang2(int [][100],int n);
void sapxep(int a[],int n);
void xoanoc(int b[100][100],int a[],int n);


main(){
 	int n;
 	printf("nhap ma tran NxN voi N = "); scanf("%d",&n);
 	int a[100];
 	int b[100][100];
 	nhapmang(a,n);
 	xuatmang1(a,n);
 	printf("\n");
 	sapxep(a,n);
 	xuatmang1(a,n);
 	printf("\n");
 	xoanoc(b,a,n);
 	xuatmang2(b,n);
 	
}
void nhapmang(int a[100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("nhap a[%d][%d] = ",i,j); scanf("%d",&a[i*n+j]);
		}
	}
}

void xuatmang2(int b[100][100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}

void xuatmang1(int a[100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i*n+j]);
		}
		printf("\n");
	}
}

void sapxep(int a[100],int n){
	int i,j,t;
	for(i=0;i<n*n;i++){
		for(j=i+1;j<n*n;j++)
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}		
		}				
}

void xoanoc(int b[100][100],int a[100],int n){
	int hang=n-1,cot=n-1,d=0,i,j=0;
	while(j<n*n){
	
	for(i=d;i<=cot;i++)
		b[d][i]=a[j++];
	for(i=d+1;i<=hang;i++)
		b[i][cot]=a[j++];		
	for(i=cot-1;i>=d;i--)
		b[cot][i]=a[j++];
	for(i=hang-1;i>d;i--)
		b[i][d]=a[j++];
		
		d++; hang--; cot--;
	}
	
}
	


