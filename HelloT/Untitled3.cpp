#include<iostream>
using namespace std;

main(){
	int n=3;
	int b[3][3];
	int a[3][3];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			a[i][j]=i*n+j;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			b[i][n-j-1]=a[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<b[j][i];
		cout<<endl;
	}
}
