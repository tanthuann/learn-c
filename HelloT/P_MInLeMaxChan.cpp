#include<iostream>
using namespace std;
#include<stdlib.h>

void nhapmang(int *pa,int n);
void xuatmang(int *pa,int n);
int minle(int *,int );
int maxchan(int *,int );
void timchanle(int *pa,int n,int *pb,int *pc);

main(){
	int *pa,*pb,*pc,n;
	cout<<"nhap n = "; cin>>n;
	pa = new int[n];
	pc = new int[n];
	pb = new int[n];
	nhapmang(pa,n);
	xuatmang(pa,n);
	timchanle(pa,n,pb,pc);
	cout<<"Min le = "<<minle(pc,n);
	cout<<"Max chan = "<<maxchan(pb,n);		
	delete pa,pb,pc;
	return 0;
}

void nhapmang(int *pa,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>*(pa+i);
	}
}

void xuatmang(int *pa,int n){
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(pa+i);
	}
}

int minle(int *pa,int n){
	int min=1000;
	for(int i=0;i<n;i++){
		if(min>*(pa+i))
			min=*(pa+i);
	}
	return min;
}

int maxchan(int *pa,int n){
	int max=*pa;
	for(int i=0;i<n;i++){
		if(max<*(pa+i))
			max=*(pa+i);
	}
	return max;
}

void timchanle(int *pa,int n,int *pb,int *pc){
	int j=0,k=0;
	for(int i=0;i<n;i++){
		if(*(pa+i)%2==0){
			*(pb+j)=*(pa+i);
			j++;
		}
		else {
			*(pc+k)=*(pa+i);
			k++;
		}
	}
}




















