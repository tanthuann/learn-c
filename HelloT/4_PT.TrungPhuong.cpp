#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,t1,t2;
	float denta,x1,x2,x3,x4;
	printf("nhap a = "); scanf("%f",&a);
	printf("nhap b = "); scanf("%f",&b);
	printf("nhap c = "); scanf("%f",&c);
	if(a==0){	
			if(b==0){
					if(c==0)
						printf("Phuong trinh vo so nghiem");
					else printf("Phuong trinh vo nghiem");}
					else if((-c/b)<0)
					printf("Phuong trinh vo nghiem");
					else if((-c/b==0))
					printf("Phuong trinh co nghiem x = 0");
			else{
		 		printf("Phuong trinh co 2 nghiem\n");
		 		x1=-sqrt(-c/b);
		 		x2=sqrt(-c/b);
		 		printf("x1 = %.2f\n",x1);
		 		printf("x2 = %.2f",x2);}
	}
	else {
	denta=pow(b,2)-(4*a*c);
	if(denta<0)
		printf("phuong trinh vo nghiem");
	else 
	if(denta==0){
		if(-b/(2*a)<0)
		printf("phuong trinh vo nghiem");
		else{
		printf("phuong trinh co 2 nghiem ");
		x1=sqrt(-b/(2*a));
		x2=-sqrt(-b/(2*a));		}}
		
	else
	{
	printf("Nghiem cua phuong trinh la: \n");
	t1=(-b+sqrt(denta))/(2*a);
	t2=(-b-sqrt(denta))/(2*a);
	if(t1>0)
	{
	printf("x1 = %f\n",sqrt(t1));
	printf("x2 = %f\n",-sqrt(t1));
	}		
	if(t2>0)
	{
	printf("x3 = %f\n",sqrt(t2));
	printf("x4 = %f\n",-sqrt(t2));	
	}
}}}
