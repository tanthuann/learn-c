#include<stdio.h>
#include<math.h>
#define pi 3.14
void hcn()
{
	int cd,cr;
	printf("Nhap chieu dai = "); scanf("%d",&cd);
	printf("Nhap chieu rong = "); scanf("%d",&cr);
	printf("Chu vi hinh chu nhat = %d\n",(cd+cr)*2);
	printf("Dien tich hinh chu nhat = %d\n",cd*cr);
}
void tg()
{
	float c1,c2,c3;
	float dt,p;
	xyz:
	printf("Nhap canh 1 = "); scanf("%f",&c1);
	printf("Nhap canh 2 = "); scanf("%f",&c2);
	printf("Nhap canh 3 = "); scanf("%f",&c3);
	if((c1+c2)<=c3||(c1+c3)<=c2||(c2+c3)<=c1)
		{
			printf("Khong ton tai tam giac nay, yeu cau nhap lai canh !!!!\n");
			goto xyz;
		}
	p=(c1+c2+c3)/2;
	printf("Chu vi tam giac = %d\n",c1+c2+c3);	
	printf("Dien tich tam giac = %f\n",sqrt(p*(p-c1)*(p-c2)*(p-c3)));
}
void ht()
{
	int r;
	printf("nhap ban kinh r = "); scanf("%d",&r);
	printf("Chu vi hinh tron = %.2f\n",r*2*pi);
	printf("Dien tich hinh tron = %.2f\n",r*r*pi);
}
void hv()
{
	int a;
	printf("nhap canh a = "); scanf("%d",&a);
	printf("Chu vi hinh vuong = %.1f\n",a*4);
	printf("Dien tich hinh vuong = %d\n",a*a);
}
main()
{
	int x;
	printf("Nhap 1 de tinh CV-DT hinh tam giac\n");
	printf("Nhap 2 de tinh CV-DT hinh vuong\n");
	printf("Nhap 3 de tinh CV-DT hinh chu nhat\n");
	printf("Nhap 4 de tinh CV-DT hinh tron\n");
	printf("Nhap 0 de thoat chuong trinh\n\n\n");
	abc:
	printf("Nhap 1 so tu 0 den 4 : "); scanf("%d",&x);
	switch (x)
	{
		case 3 : 
		{
			hcn();
			goto abc;			
		}
		case 1 :
			tg();
			goto abc;
			break;
		case 2:
			hv();
			goto abc;			
		case 4 :
			ht();
			goto abc;			
		case 0 :
			break;
		default :
			printf("Ban nhap sai, yeu cau nhap lai !!!\n");
			goto abc;
	}	
}
