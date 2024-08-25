//program to calculate the sum of first n natutal numbers using for loop
#include<stdio.h>
int main(){
	int i,a=0;
	printf("enter any number:");
	scanf("%d",&i);
	for(i;i>0;i--){
		a=a+i;
		
	}
	printf("the sum of %d natural number is %d",i,a);
	return 0;
}
