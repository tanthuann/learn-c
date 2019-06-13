#include<stdio.h>

void docMaTranTuFile(int a[][10],int *n,int *m,char tentep[]){
	FILE*f;
	f=fopen(tentep,"rt");
	int dong,cot;
	fscanf(f,"%d",dong);
	fscanf(f,"%d",cot);
	//printf("d",cot);
	*n=dong;
	*m=cot;
	int i,j;
	for(i=0;i<dong;i++)
	{
		for(j=0;j<cot;j++)
		{
			fscanf(f,"%d",&a[i][j]);
		}
	}
	//printf("%d",a[2][3]);
	fclose(f);

}
void xuatMaTran(int a[][10],int n,int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",&a[i][j]);
		}
		printf("\n");
	}
}

main(){
	int a[10][10];
	int m,n;
	char tentep[]="T:\\dulieu.txt";
	docMaTranTuFile(a,&n,&m,tentep);
	xuatMaTran(a,n,m);
	
	
}
