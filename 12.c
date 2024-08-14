#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("\n enter the value of b: ");
	scanf("%d",&b);
	printf("\n enter the value of c: ");
	scanf("%d",&c);
	if (a<b && a<c){
		printf("%d is samllest",a);
	}
	 else if (b<a && b<c){
		printf("%d is samllest",b);
}
else{
	   	printf("%d is samllest",c);
}
return 0 ;}	  
