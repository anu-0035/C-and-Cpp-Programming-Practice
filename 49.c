//program and intialise and traverse 2D aaray,transpose of the matrix3
#include<stdio.h>
int main(){
	int n,m,i,j;
	printf("enter the number of rows:");
	scanf("%d",&n);
	printf("enter the number of column:");
	scanf("%d",&m);
	int a[n][m],b[m][n];
	printf("enter the elements of the list\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("enter the elements (%d,%d):",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("the elemets of the list are\n");
		for(i=0;i<n;i++){
		printf("[ ");
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
			}
		printf("]\n");}
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[j][i]=a[i][j];}}
		printf("the transpose of the matrix is:\n");
		for(i=0;i<m;i++){
		printf("[ ");
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
			}
		printf("]\n");}
		return 0;
}
