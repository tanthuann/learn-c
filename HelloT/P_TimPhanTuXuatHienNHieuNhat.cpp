#include<iostream>
using namespace std;
#include<stdlib.h>

void nhapmang(int *pa,int n);
void xuatmang(int *pa,int n);
void solanxuathien(int *,int );

main(){
	int *pa,n;
	cout<<"nhap n = "; cin>>n;
	pa = new int[n];
	nhapmang(pa,n);
	xuatmang(pa,n);
	solanxuathien(pa,n);
	delete pa;
}

void nhapmang(int *pa,int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>*(pa+i);
	}
}

void xuatmang(int *pa,int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"\t"<<*(pa+i);
	}
}

void solanxuathien(int *pa,int n){
	for(int i=0;i<n;i++){
		int dem=1,max=1;
		for(int j=i+1;j<n;j++){
			if(*(pa+i)==*(pa+j)){
				dem++;
			}
		}
		if(max<dem&&*(pa+i-1)!=*(pa+i)&&*(pa+i-2)!=*(pa+i)){		
		max=dem;
		cout<<"\nPhan tu xuat hien nhiu lan la "<<*(pa+i)<<" voi "<<max<<" lan\n";
		}
	}
		
}












































