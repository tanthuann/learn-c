#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

struct sinhvien{
	char hoten[30];
	float diemtb;
	int rank;
};

void nhapsv(sinhvien &sv);
void xuatsv(sinhvien &sv);
void nhapdssv(sinhvien ds[],int n);
void xuatdssv(sinhvien ds[],int n);
void xephangsv(sinhvien ds[],int n);
void hoandoi(sinhvien ,sinhvien );

main(){
	int n;
	sinhvien sv;
	sinhvien ds[50];
	cout<<"Nhap so luong sinh vien : "; cin>>n;
	nhapdssv(ds,n);
	xephangsv(ds,n);
	xuatdssv(ds,n);	
}

void nhapsv(sinhvien &sv){
	fflush(stdin);
	cout<<"\tHo va ten : "; gets(sv.hoten);
	cout<<"\tDiem TB : "; cin>>sv.diemtb;
	//cout<<"\tRank : "<<sv.rank;
}

void xuatsv(sinhvien &sv){
	cout<<"\tHo va ten : "; puts(sv.hoten);
	cout<<"\tDiem TB : "<<sv.diemtb<<endl;
	cout<<"\tRank : "<<sv.rank<<endl;
}

void nhapdssv(sinhvien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap sinh vien thu :"<<i+1<<endl;
		nhapsv(ds[i]);
	}
}

void xuatdssv(sinhvien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<"Thong tin sinh vien thu "<<i+1<<endl;
		xuatsv(ds[i]);
	}
}

void xephangsv(sinhvien ds[],int n){
	int i,rank=1;
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		if(ds[i].diemtb<ds[j].diemtb){
			hoandoi(ds[i],ds[j]);
		}
	}
		
	ds[0].rank=rank;
	for(int k=1;k<n;k++){
		if(ds[k].diemtb!=ds[k-1].diemtb){
			rank++;
			ds[k].rank=rank;
		}
		else ds[k].rank=rank;
	}
}

void hoandoi(sinhvien &a,sinhvien &b){
	sinhvien t=a;
	a=b;
	b=t;	
}





















