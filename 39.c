#include<stdio.h>
int main(){
	float a;
	printf("enter the value of a: ");
	scanf("%f",&a);
	printf("*%0.3f*,*%0.9f*",a,a);
	return 0;
}
