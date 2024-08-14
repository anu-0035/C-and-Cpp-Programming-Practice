//rogram to find the smallest number out of 3 var using nested if statement
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("\n enter the value of b: ");
	scanf("%d",&b);
	printf("\n enter the value of c: ");
	scanf("%d",&c);
	if (a<b){
		if (a<c){
			printf("a is smallest\n");
		}
	}
	else if (c<b){
		if (c<b){
			printf("c is smallest\n");
		}
	}
	else {
			printf("b is smallest\n");
		}
	return 0;
	}
	
