#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>

using namespace std;

struct sinhvien{
	char ten[30];
	char MSSV[10];
	struct diemsv{
		float toan,li,hoa;
		};
	diemsv diem;
};

void nhapsv(sinhvien sv[50],int n);
void xuatsv(sinhvien sv[50],int n);
float diemtb(sinhvien sv[50], int i);


main(){
	int n;
	sinhvien sv[50];
	cout<<"Nhap so luong sinh vien : "; 
	cin>>n; 
	nhapsv(sv,n);
	xuatsv(sv,n);
	return 0;	
}



void nhapsv(sinhvien sv[],int n){
	for(int i=0;i<n;i++){	
		fflush(stdin);
		cout<<"\nNhap thong tin sinh vien "<<i+1;
		cout<<"\nNhap hoten : "; 	gets(sv[i].ten);
		cout<<"Nhap MSSV : "; 		gets(sv[i].MSSV);
		cout<<"Nhap diem Toan : "; 	cin>>sv[i].diem.toan;
		cout<<"Nhap diem Li : "; 	cin>>sv[i].diem.li;
		cout<<"Nhap diem Hoa : "; 	cin>>sv[i].diem.hoa;
	}
}

void xuatsv(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);	//fflush(stdin);  dung de xoa bo dem chua dau xuong dong cua ham cin //dat o day vi no lap lai bo dem nhieu lan
		cout<<"-Thong tin sinh vien "<<i+1<<endl;
		cout<<"\tHo va ten : ";	puts(sv[i].ten);
		cout<<"\tMSSV : ";		puts(sv[i].MSSV);
		cout<<"\tDiem Li : "<<sv[i].diem.li;
		cout<<"\tDiem Toan : "<<sv[i].diem.toan;
		cout<<"\tDiem Hoa : "<<sv[i].diem.hoa<<endl;
		cout.precision(2);   //Lay 2 so sau dau phay
		cout<<"\tDiem TB : "<<fixed<<diemtb(sv,i)<<endl;
	}
}

float diemtb(sinhvien sv[],int i){
	return ((sv[i].diem.li+sv[i].diem.hoa+sv[i].diem.toan))/3;
}

