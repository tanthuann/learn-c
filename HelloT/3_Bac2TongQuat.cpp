#include<stdio.h>
#include<math.h>

int ptb2(float,float,float,float *,float *);
main()
{
	float a=10.0,b=40/19,c;
	float denta,x1,x2;
	float f1,f2;
	for(int i=0;i<19;i++){
	
		printf("nhap f1 = "); scanf("%f",&f1);
		printf("nhap f2 = "); scanf("%f",&f2);
		c=(2*f2)/19+2019-f1;
		fflush(stdin);
		ptb2(a,b,c,&x1,&x2);
	}
	
}

int ptb2(float a,float b, float c, float *x1,float *x2){
	int denta;
	if(a==0)
	{
		if(b==0){
			if(c==0)
			printf("Phuong trinh vo so nghiem");
			else printf("phuong trinh vo nghiem");}
		else printf("phuong trinh co nghiem duy nhat x = %.2f",-c/b);}
	else
	{denta=pow(b,2)-(4*a*c);
	if(denta<0)
		printf("phuong trinh vo nghiem");
	else 
	if(denta==0)
		{
		printf("phuong trinh co 1 nghiem x = %f",-b/(2*a));}
	else
	{
	*x1=(-b+sqrt(denta))/(2*a);
	*x2=(-b-sqrt(denta))/(2*a);
	printf("phuong trinh co 2 nghiem phan biet x1, x2\n");
	printf("x1 = %.2f\n",x1);
	printf("x2 = %.2f",x2);}
		
	}
}
