#include<stdio.h>
int fact(int x);
int main(){
	int n;
	printf("enter any number: ");
	scanf("%ld",&n);
	printf("the factirial of the number is: %d",fact(n));
	return 0;
}
int fact(int x){
	if (x==0){
		return 1;
	}
	else{
		return x*fact(x-1);
	}
}
