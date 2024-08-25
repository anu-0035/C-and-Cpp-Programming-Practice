#include<stdio.h>
int main(){
	int n=1,a;
	printf("enter any number:");
	scanf("%d",&a);
	do{
		printf("%d x %d= %d\n",a,n,a*n);
		n++;
	}
	while(n<=10);
	return 0;
}
