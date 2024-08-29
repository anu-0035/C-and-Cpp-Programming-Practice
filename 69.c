#include<stdio.h>
#include<conio.h>
int main(){
	FILE *p;
	p=fopen("a.txt","w");
	if (p==NULL){
		printf("\n file cannot be opned for creation");
	}
	else{
		printf("\n file created succesfully!");
	}
fclose(p);}
