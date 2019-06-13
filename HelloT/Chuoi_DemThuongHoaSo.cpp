#include<stdio.h>
#include<string.h>
#include<ctype.h>

int demkituthuong(char [],int n);
int demkituhoa(char [],int n);
int demso(char [],int n);

main(){
	char str[100];
	int n;
	gets(str);
	n=strlen(str);
	printf("So ki tu thuong: %d\n",demkituthuong(str,n));
	printf("So ki tu hoa: %d\n",demkituhoa(str,n));
	printf("So ki tu khong phai chu cai: %d",demso(str,n));
}

int demkituthuong(char str[],int n){
	int i,dem=0;
	while(str[i]!='\0'){
		if(islower(str[i])) //if(islower(str[i])==1)
			dem++;
		i++;
	}
	return dem;
}

int demkituhoa(char str[],int n){
	int i,dem=0;
	while(str[i]!='\0'){
		if(isupper(str[i])) //if(isupper(str[i])==1)
			dem++;
		i++;
	}
	return dem;
}

int demso(char str[],int n){
	int i,dem=0;
	while(str[i]!='\0'){
		if(isalpha(str[i])==0)		
			dem++;
		i++;
	}
	return dem;
}



