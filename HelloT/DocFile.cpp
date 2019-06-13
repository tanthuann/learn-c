#include<stdio.h>

int docmatran(int [][10],char []);
void xuatmatran(int [][10],int );
void xuatgiatricot(int [][10],int ,int);
int main(int argc,char*argv[])
{
	char tentep[]="T:\\dulieu.txt";
	int a[10][10];
	int n=docmatran(a,tentep);
	xuatmatran(a,n);
}
int docmatran(int a[][10],char tentep[])
{
	FILE*f;
	int n;
	f=fopen(tentep,"rt");
	fscanf(f,"%d",&n);
	
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			fscanf(f,"%d",&a[i][j]);
		}
	}
	fclose(f);
}

void xuatmatran(int a[][10],int n)
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",&a[i][j]);
		}
		printf("\n");
	}
}
