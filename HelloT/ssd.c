#include <stdio.h>
int sohoanhao(int n){
	int tong=0,i;
	for(i=1;i<n;i++)
		if(n%i==0)	tong+=i;		
	if(tong==n)	return 1;
	else return 0;
}
int main(){
	printf("%d", sohoanhao(6));
	return 0;
}
