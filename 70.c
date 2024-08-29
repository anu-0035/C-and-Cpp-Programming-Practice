#include<stdio.h>
#include<conio.h>
int main(){
	FILE *p;
	char c;
	
	p=fopen("a.txt","r");
	printf("the line of text is:\n");
	while((c=getc(p))!=EOF){
		printf("%c",c);
	}
	fclose(p);}
