#include<stdio.h>
#include<string.h>
#include<ctype.h>

int demtu(char str[],int l);
void xoatu(char str[],int l,int p,int n);  //xoa n phan tu bat dau o vi tri p

main(){
	char str[100];
	int l;
	int n,p;
	gets(str);
	l=strlen(str);
	printf("So tu trong chuoi %d\n",demtu(str,l));
	printf("nhap p = "); scanf("%d",&p);
	printf("nhap n = "); scanf("%d",&n);
	xoatu(str,l,p,n);
	puts(str);
}
int demtu(char str[100],int l){
	int i=0,dem=0;
	for(i=0;i<=l;i++){
		if(str[i]==' '||str[i]=='\0')
		dem++;
	}
	return dem;
}

void xoatu(char str[100],int l,int p,int n){ 
	int i;
	for(i=p;i<=l;i++){
		str[i]=str[i+n];
	}
	l=l-n;
}


























