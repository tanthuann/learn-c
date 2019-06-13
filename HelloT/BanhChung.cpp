#include<iostream>
using namespace std;
void banhchung(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==i||j==n/2+1||j==n||j==n-i+1||i==1||j==1||i==n||i==n/2+1)
				cout<<"* ";
			else
			cout<<"  ";
		}
		cout<<endl;
	}	
}

main(){
	int n;
	cout<<"nhap cap banh chung (so le) =";
	cin>>n;
	banhchung(n);
}
