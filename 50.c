#include<stdio.h>
int main(){
	int n,m,i,j,x=0,y=0;
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
	for(i=0;i<n;i++){
		x+=a[i][i];
	}
	printf("the sum of principle diagonal is: %d\n",x);
	for(i=0;i<n;i++){
		j=m-1;
		while(j<=0){
		
		y+=a[i][j];}
	}
	printf("the sum of other diagonal is: %d\n",y);
	return 0;
}
