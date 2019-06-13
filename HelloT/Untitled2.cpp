#include<iostream>
#include<conio.h>
using namespace std;
void doi(int *,int &b);

main(){
	int x,y;
	doi(&x,y=2);
	cout<<x<<"  "<<y;
}

void doi(int *a,int &b){
	*a=b;
	*a+=b++;
}
