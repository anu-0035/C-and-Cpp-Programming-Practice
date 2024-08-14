#include<stdio.h>
int main(){
	float x;
	printf("enter the marks:");
	scanf("%f",&x);
	if (x>90 && x<=100){
		printf("GRADE A \n");}
	else if (x>80 && x<=90){
		printf("GRADE B \n");}
	else if (x>70 && x<=80){
		printf("GRADE C \n");}
	else if (x>60 && x<=70){
		printf("GRADE D \n");}
	else{
		printf("FAIL!");
	}
	return 0;
}
		
