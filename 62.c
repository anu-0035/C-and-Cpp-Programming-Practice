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
	printf("enter the second student info\n");
	printf("enter the name:");
	gets(r.name);
	printf("enter the roll:");
	scanf("%d",&r.roll);
	printf("enter the marks:");
	scanf("%f",&r.marks);
	if (s.marks>r.marks){
		printf("marks of 1st student is more");
	}
	else{
		printf("marks of 2st student is more");
	}
	return 0;}
