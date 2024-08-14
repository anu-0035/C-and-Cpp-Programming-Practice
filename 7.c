//program to find enter number is even or odd
#include<stdio.h>
int main(){
	int x;
	printf("enter any number:");
	scanf("%i",&x);
	if (x%2==0){
		printf("EVEN \n");
	}

	else{
		printf("ODD \n");
	}
	return 0;
}
