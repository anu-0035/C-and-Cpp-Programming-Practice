
#include<stdio.h>
char fun(int x){
	return((char)x);
}
int main(){
	int a;
	char c;
	printf("enter the number for which u want the ascii value u want: ");
	scanf("%d",&a);
	c=fun(a);
	printf("the char is : %c",c);
	return 0;
}
