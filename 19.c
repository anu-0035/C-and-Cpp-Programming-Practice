#include<stdio.h>
int main(){
	int n=1,a;
	printf("enter any number:");
	scanf("%d",&a);
	while(n<=10){
		printf("%d x %d= %d\n",a,n,a*n);
		n++;
	}
	return 0;
}
