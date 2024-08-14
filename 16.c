#include<stdio.h>
int main(){
	char p;
	printf("enter the any character: ");
	scanf("%c",&p);
	switch(p){
		case  'A':
			printf("\n APPLE! ");
			break;
		case 'B':
			printf("\n BANANA!");
			break;
		case 'C':
			printf("\n CHERRY!");
			break;
		case 'D':
			printf("\n DRAGON FRUIT!");
			break;
		case 'E':
			printf("\n  EIGHT ORANGES!");
			break;
		case 'G':
			printf("\n GRAPES!");
			break;
		case 'H':
			printf("\n HEMP!");
			break;
		default:
			printf("\n enter a valid input");
		break;}
		return 0;
	}
