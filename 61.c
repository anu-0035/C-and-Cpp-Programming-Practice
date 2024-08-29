#include<stdio.h>
struct stu{
	char name[100];
	int roll;
	float marks;
};
int main(){
	struct stu s,r;
	printf("enter the name:");
	gets(s.name);
	printf("enter the roll:");
	scanf("%d",&s.roll);
	printf("enter the marks:");
	scanf("%f",&s.marks);
	r=s;
	printf(" \ndisplaying the information\n");
	printf("name:");
	puts(r.name);
	printf("roll no: %d\n",r.roll);
	printf("marks: %.2f",r.marks);
	return 0;
	
}
