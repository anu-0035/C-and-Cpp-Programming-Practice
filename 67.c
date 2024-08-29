#include<stdio.h>
#include<string.h>
union data{
	int i;
	float f;
	char str[20];
};
int main(){
	union data d;
	d.i=10;
	printf("d.i= %d\n",d.i);
	d.f=45.7;
	printf("d.f= %f\n",d.f);
	strcpy(d.str,"timepass!");
	printf("d.i= %s",d.str);
	return 0;
}
