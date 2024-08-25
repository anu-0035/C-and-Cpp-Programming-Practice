#include<stdio.h>
int main(){
	int i,n,j;
	printf("enter how many rows u want: ");
	scanf("%d",&n);
	printf("the pattern is :\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;}
