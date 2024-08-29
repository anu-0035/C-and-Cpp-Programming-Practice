#include<stdio.h>
struct car{
	char *name;
	int seats;
	float price;
};
int main(){
	struct car s, *r;
	r=&s;
	printf("name:");
	scanf("%s",s.name);
	printf("price:");
	scanf("%f",&s.price);
	printf("seats:");
	scanf("%d",&s.seats);
	printf("%s  %f  %d\n %s  %f  %d\n%s  %f  %d\n",s.name,s.price,s.seats,r->name,r->price,r->seats,
	(*r).name,(*r).price,(*r).seats
	);
	return 0;
	
}
