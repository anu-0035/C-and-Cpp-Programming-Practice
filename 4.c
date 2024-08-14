//program to ask yhe user to enter the biodata like regno,name,city,contact,tgpa
#include<stdio.h>
#include<conio.h>
int main()
{ char n[20],p[20],c[10];
int r;
float t;
	printf("enter the regno: ");
	scanf("%d",&r);
	printf("enter your namr: ");
	scanf("%s",&n);
	printf("enter your city: ");
	scanf("%s",&p);
	printf("enter your contact: ");
	scanf("%s",c);
	printf("enter your tgpa: ");
	scanf("%f",&t);
	printf("name: %s\n", n);
	printf("regno: %d\n", r);
	printf("city: %s\n", p);
	printf("contact: %s\n", c);
	printf("tgpa: %f\n", t);
	return 0;
}
6281107536 teja

