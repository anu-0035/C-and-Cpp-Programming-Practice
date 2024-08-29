#include<stdio.h>
void fun();
int main(){
	fun();
	fun();
	fun();
	return 0;
}
void fun(){
	int a=10;
	static int b=10;
	printf("value of a: %d,value of b: %d\n",a,b);
	a++;
	b++;
}
