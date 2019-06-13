#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuyendoi(char str[100],int &n);

main(){
	char str[100];
	int n=strlen(str);
	gets(str);
	chuyendoi(str,n);
	printf("Sau khi chuyen doi la : ");
	puts(str);
	return 0;
}

void chuyendoi(char str[],int &n){
	int i=0,j;
	//char c=' ';
	while(str[i]!='\0'){
		if(isalpha(str[i])){
			str+i=str+i+1;;
			i--;
		}
		else i++;
	}
	
//	for(i=n-4;(1<=i<=3);i--){   // chuyen chuoi so thanh dinh dang xx.xxx.xxx
//		strcat(str+i,str+i+1);
//		i=i-2;
//		n++;
//	}
}
