#include<stdio.h>
void first();
int main(){
	extern int x;
	printf("%d\n",x);
	first();
	printf("%d\n",x);
	return 0;
}
void first(){
	extern int x;
	printf("%d\n",x);
	x+=10;}
	int x=10;

