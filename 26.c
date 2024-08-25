//program to find weather the no is even or odd if it is even print the table of that id odd find the sq root of that
#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	printf("enter any number:");
	scanf("%d",&n);
	if(n%2==0){
		printf("the number is even. \n");
		for(i=1;i<=10;i++){
		printf("%d x %d=%d\n",n,i,n*i);
	}
}
else{
	printf("the number is odd. \n");
	printf("%f",sqrt(n));
}
	return 0;
	}
