#include<stdio.h>
void cuberef(int *n);
int main(void){
	int a;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("the original value of number is %d\n",a);
	cuberef(&a);
	printf("the original value of number is %d",a);
	
}
void cuberef(int *n){
		*n=*n * *n * *n;
}
