#include<stdio.h>
int main(){
	int p;
	printf("enter the no of points: ");
	scanf("%d",&p);
	switch(p){
		case  6:
			printf("\n FRIDAY! ");
			break;
		case 1:
			printf("\n SUNDAY!");
			break;
		case 2:
			printf("\n MONDAY!");
			break;
		case 3:
			printf("\n TUESDAY!");
			break;
		case 4:
			printf("\n  WEDNESDAY!");
			break;
		case 5:
			printf("\n THURSADAY!");
			break;
		case 7:
			printf("\n SATURDAY!");
			break;
		default:
			printf("\n enter a valid input");
		break;}
		return 0;
	}
