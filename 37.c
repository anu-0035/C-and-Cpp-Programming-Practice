#include<stdio.h>
int main(){
	float c;
	int a,b;
	printf("enter the valuse of total: ");
	scanf("%d",&a);
	printf("enter the valuse of counter: ");
	scanf("%f",&c);
	b=a/(int)c;
	printf("the avg is: %d",b);
	return 0;
}
