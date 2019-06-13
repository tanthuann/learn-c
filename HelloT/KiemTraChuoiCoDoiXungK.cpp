#include<stdio.h>
#include<string.h>
#include<ctype.h>

int kiemtrachuoi(char str[],int n);

main(){
	char str[100];
	int n;
	gets(str);
	n=strlen(str);
	if(kiemtrachuoi(str,n))
		printf("chuoi doi xung");
	else printf("chuoi khong doi xung ");
	
}

int kiemtrachuoi(char str[],int n){
	int i;
	for(i=0;i<=(n-1)/2;i++){
		if(str[i]==str[n-i-1])
			;
		else goto abc;
	}
	return 1;
	abc:
		return 0;
}
