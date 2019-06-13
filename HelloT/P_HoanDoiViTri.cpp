#include<stdio.h>
#include<conio.h>

main(){
	int a=10,b=20,*pa,*pb,t;
	pa=&a;
	pb=&b;
	printf("*pa=%d \n *pb=%d",*pa,*pb);
	t=*pa;
	*pa=*pb;
	*pb=t;
	printf("\na=%d\nb=%d",*pa,*pb);
	
}
