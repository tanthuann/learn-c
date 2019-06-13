#include<iostream>
#include<stdlib.h>
using namespace std;

void nhapmang(int *pa,int n);
void xuatmang(int *pa,int n);
void xuatchuyenvi(int *pa,int n);

main(){
	int *pa,n;	
	cout<<"Nhap n = ";
	cin>>n;
	pa = new int[n*n];
	nhapmang(pa,n);
	xuatmang(pa,n);
	cout<<"Ma tran chuyen vi la:\n";
	xuatchuyenvi(pa,n);
	delete pa;
}

void nhapmang(int *pa,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"] = "; 
			cin>>*(pa+(i*n+j));
		}
	}   
}

void xuatmang(int *pa,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"\t"<<*(pa+(i*n+j));
		}
		cout<<endl;
	}
}

void xuatchuyenvi(int *pa,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"\t"<<*(pa+(j*n+i));
		}
		cout<<endl;
	}
}

