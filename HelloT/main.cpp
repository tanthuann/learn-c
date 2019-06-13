#include<iostream>
using namespace std;
#include<stdlib.h>

void nhapmang(int *pa,int n);
void xuatmang(int *pa,int n);

main(){
	int *pa,n;
	cout<<"nhap n = "; cin>>n>>endl;
	pa = new int[n];
	nhapmang(pa,n);
	xuatmang(pa,n);
}

void nhapmang(int *pa[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"a[",<<i<<"] = "<<endl;
		cin>>*(pa+i);
	}
}

void xuatmang(int *pa[],int n){
	int i;
	fot(i=0;i<n;i++){
		cout<<"\t"<<*(pa+i);
	}
}
