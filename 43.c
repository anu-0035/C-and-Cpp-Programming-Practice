#include<stdio.h>
void fun1(){
	auto int a=10;
	printf("%d\n",a);
}
void fun2(){
	auto int a=20;
	printf("%d\n",a);
}
int main(){
	auto int a=30;
	fun1();
	fun2();
	printf("%d",a);
	return 0;
}
