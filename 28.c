//program to enter the value of 2D array and display them in the form of matrix
#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("enter how many rows you want: ");
	scanf("%d",&r);
	printf("enter how many colunm you want: ");
	scanf("%d",&c);
	printf("enter the values of the matrix %dx%d \n",r,c);
	int a[r][c];
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the value of the element (%d,%d): ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<r;i++){
		printf("[");
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
			}
			printf("]\n");
}
return 0;
}
