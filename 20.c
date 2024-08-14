#include<stdio.h>
int main(){
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
		n++;

	}
	while(n<=10);
	return 0;
}

