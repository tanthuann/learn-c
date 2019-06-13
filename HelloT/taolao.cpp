#include<stdio.h>
#include<iostream>
using namespace std;
int soPhanTuCucDai(int [][100],int,int );
int CucDai(int [][100],int,int);
main(){
	int a[100][100];
	int x,y;
	cout<<"so cot = "; cin>>x;
	cout<<"so dong = "; cin>>y;
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++){
			cout<<"nhap a["<<i<<"]["<<j<<"] = "; cin>>a[i][j];
		}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cout<<&a[i][j]<<"\t";
		}
		cout<<endl;
	}	
	cout<<soPhanTuCucDai(a,x,y)<<endl;
	
	return 0;
}

int soPhanTuCucDai(int a[][100],int x,int y){
	int dem=0;
	for(int i=0;i<x;i++)
		for(int j=0;j<y;j++){			
			if(CucDai(a,i,j)){
				cout<<a[i][j]<<endl;
				dem++;
			}				
		}
	return dem;
}
int CucDai(int a[][100],int i,int j){
	int max=a[i][j];
	for(int k=i-1;k<=i+1;k++)
		for(int l=j-1;l<=j+1;l++){
			if(max<a[k][l])
				return 0;			
		}
	return 1;
}


















