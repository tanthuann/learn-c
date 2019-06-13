#include<stdio.h>
#include<string.h>
#include<ctype.h>

int demkhoangtrang(char [],int n);
void xoakhoangtrang(char [],int &n);


main(){
	char ch[100];
	int n;
	printf("nhap chuoi :"); gets(ch);
	n=strlen(ch);
	//printf("%d",n);	
	printf("so khoang trang cau chuoi la : %d\n",demkhoangtrang(ch,n));
	xoakhoangtrang(ch,n);
	printf("chuoi sau khi xoa khoang trang la :");
	puts(ch);
	//n=strlen(ch);
	//printf("%d",n);
	
	
}

int demkhoangtrang(char ch[],int n){
	int i,dem=0;
	for(i=0;i<n;i++){
		if(ch[i]==' ')
			dem++;
	}
	return dem;
}

void xoakhoangtrang(char ch[],int &n){
	int i;
	while(ch[0]==' '){
		strcpy(ch,ch+1); // xoa khoang trang dau dong
	}
	n=strlen(ch);
	
	while(ch[n-1]==' '){
		strcpy(ch+n-1,ch+n);  //xoa khoang trang cuoi dong		
	}
	n=strlen(ch);
	
	while(ch[i]!='\0'){       //xoa khoang trang o giua
		if(ch[i]==' ')
			if(ch[i+1]==' '){
				strcpy(ch+i,ch+i+1);
				i--;
				n--;
			}
			else i++;
		i++;
	}

}





















