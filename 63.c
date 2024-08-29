#include<stdio.h>
struct stu{
	char name[100];
	int roll;
	float marks;
};
int main(){
	int i,n;
	printf("enter the no of student u want to enter:");
	scanf("%d",&n);
	struct stu a[n];
	for(i=0;i<n;i++){
	printf("enter the name:");
	scanf("%s",a[i].name);
	printf("enter the roll:");
	scanf("%d",&a[i].roll);
	printf("enter the marks:");
	scanf("%f",&a[i].marks);
	}
	for(i=0;i<n;i++){
		printf("name:");
	puts(a[i].name);
	printf("roll no: %d\n",a[i].roll);
	printf("marks: %.2f",a[i].marks);
	}
	return 0;
}
