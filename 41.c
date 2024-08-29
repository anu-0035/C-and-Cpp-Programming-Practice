//program to perform the add of 2 no
#include<stdio.h>
void addref(int *n ,int *m);
int main(void){
	int a,b,*c;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	addref(&a,&b);
	printf("the sum  of 2 input number is: %d",a);
	
}
void addref(int *n,int *m){
	 *n +=*m	;
}
