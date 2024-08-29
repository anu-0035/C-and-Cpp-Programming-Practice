//program to print thr table of any number usring global variavle,find weather is number is even or odd, using local variable 
//and find weather a no if negaitive or positive using using bloke scoped variable
#include<stdio.h>
int a=20;
int table(int x){
	int i;
	for(i=1;i<=10;i++){
		printf("%d x %d= %d\n",x,i,x*i);
	}
}
int even(int x){
	if (x%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int post(int x){
	if (x>=0){
		return 1;
	
	}
	else{
		return 0;
	}
}
int main(){
	int b=20;
	table(a);
	if (even(b)==1){
			printf(" %d is even no\n",b);
	}
	else{
			printf(" %d is odd no\n",b);
	}
	{ int a=-22;
	if (post(a)==1){
		printf(" %d is positive no\n",a);
	}
	else{
		printf(" %d is negative no\n",a);
	}
	}
	
}
