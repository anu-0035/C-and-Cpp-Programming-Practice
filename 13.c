#include<stdio.h>
int main(){
	int p;
	printf("enter the no of points: ");
	scanf("%d",&p);
	switch(p){
		case  0:
			printf("\n no geometry");
			break;
		case 1:
			printf("\n a point");
			break;
		case 2:
			printf("\n a line");
			break;
		case 3:
			printf("\n a triangle");
			break;
		case 4:
			printf("\n a quadrilateral");
			break;
		case 5:
			printf("\n a pentagon");
			break;
		default:
			printf("\n enter a valid input");
		break;
		
	}
	
return 0;}
