#include<stdio.h>
int main(){
	int r,c,i,j,k;
	printf("enter how many rows you want: ");
	scanf("%d",&r);
	printf("enter how many colunm you want: ");
	scanf("%d",&c);
	printf("enter the values of the matrix A(%dx%d) \n",r,c);
	int a[r][c],b[r][c],d[r][c];
	
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the value of the element (%d,%d): ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix A: \n");
	for (i=0;i<r;i++){
		printf("[");
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
			}
			printf("]\n");
}
	printf("enter the values of the matrix B(%dx%d) \n",r,c);

	
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter the value of the element (%d,%d): ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	printf("the matrix B: \n");
	for (i=0;i<r;i++){
		printf("[");
		for(j=0;j<c;j++){
			printf("%d ",b[i][j]);
			}
			printf("]\n");
}
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			d[i][j]=0;
		}
	}
printf("the multiplication of 2 matrix is:\n");
for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			for(k=0;k<c;k++){
			d[i][j]=d[i][j]+a[i][k]*b[k][j];
			}
			}
		}
		
	for (i=0;i<r;i++){
		printf("[");
		for(j=0;j<c;j++){
			printf("%d ",d[i][j]);
			}
			printf("]\n");
}
return 0;}

