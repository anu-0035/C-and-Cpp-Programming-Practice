#include<stdio.h>
struct car{
	char *name;
	int seats;
	float price;
};
int main(){
	struct car s;
	printf("name:");
	gets(s.name);
	printf("price:");
	scanf("%f",&s.price);
	printf("seats:");
	scanf("%d",&s.seats);
	printf("%s\n %f\n %d\n",s.name,s.price,s.seats);
	
}
