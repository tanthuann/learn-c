#include<stdio.h>
#include<iostream>
#include<fstream>

using namespace std;

void xuatmt(int *a,int n);
void nhapmt(int *,int n);
main(){
	int *a,n;
	fstream file;
	cout<<"Nhap n : "; 
	cin>>n; 
	fflush(stdin);
	a = new int [n*n];
	nhapmt(a,n);
	file.open("T:/matran.txt",ios::out);
	file<<n<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			file<<*(a+i*n+j)<<"\t";
		file<<endl;
	}
	file.close();
	
	//a = new int [n*n];
	file.open("T:/matran.txt",ios::in);
	file>>n;	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			file>>*(a+i*n+j);
		}
	file.close();
	xuatmt(a,n);
	delete a;
	return 0;
}

void xuatmt(int *a,int n){
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<*(a+i*n+j)<<"\t";
	}
	cout<<endl;
	}
}

void nhapmt(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>*(a+i*n+j); fflush(stdin);
		cout<<endl;
	}
}
