#include<stdio.h>
int thuongthanhhoa(char x);
int main()
{
	char c;
	printf("Nhap 1 chu : "); scanf("%c",&c);
	if(c<97)
	printf("%c la chu in hoa ",c);
	else
	printf("%c doi thanh chu in hoa la %c",c,thuongthanhhoa(c));
}
thuongthanhhoa(char x)
{
	x=x-32;
	return x;
}

