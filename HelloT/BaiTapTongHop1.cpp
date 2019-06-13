#include<stdio.h>
#include<math.h>
void NhapGiaTriNgauNhien(int a[1000],int x);
void XuatGiaTriNgauNhien(int a[1000],int x);
int KiemTraSoNguyenTo(int x);
int DemSoNguyenTo(int a[1000],int x);
//long TongSoNguyenTo(int [],int);
//int SoGiaTriLonHonK(int [],int,int);
//int SoaPhanTuViTriJ(int [],int,int);
//int XoaGiaTriK(int [],int,int);
//int ChenGiaTriK(int [],int,int,int);

int main()
{
	int n;
	printf("Nhap n ="); scanf("%d",&n);
	int a[1000];
	//NhapGiaTriNgauNhien(a,n);
	//XuatGiaTriNgauNhien(a,n);
//	if(KiemTraSoNguyenTo(n))
//	{
//		printf("%d la so nguyen to",n);
//	}
//	else printf("%d khong phai la so nguyen to",n);
//	
	DemSoNguyenTo(a,n);
}
void NhapGiaTriNgauNhien(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Nhap a[%d] = ",i); scanf("%d",&a[i]);
	}
}
void XuatGiaTriNgauNhien(int a[1000],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
int KiemTraSoNguyenTo(int n)
{
	
	int i,dem=0;
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		dem++;
	}
	if(dem==2)
	{
	return 1;
	}
	else
	return 0;
}
int DemSoNguyenTo(int a[1000],n)
{
	int dem=0,i;
	NhapGiaTriNgauNhien(a,n);
	for(i=0;i<n;i++)
	{
		if(KiemTraSoNguyenTo(a[i]))
		dem++;
	}
}


