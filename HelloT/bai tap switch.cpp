#include<stdio.h>
#include<stdlib.h>

int main() 
{
	char g;
	printf("nhap chu ban muon:");
	scanf("%c",&g);
	switch (g)
	{
		case'a' :
		case'b' :
		case'c' :
			printf("day la chu\n");
			break;
		default :
			printf("day khong phai la chu\n");
			break;
			
			
	}
	return 0;
}
