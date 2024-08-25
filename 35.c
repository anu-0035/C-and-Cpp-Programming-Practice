#include<stdio.h>
int main(){
	int i,n,m,a;
	printf("enter the starting range:");
	scanf("%d",&n);
	printf("enter the ending range:");
	scanf("%d",&m);
	printf("enter the number for which u want the table: ");
	scanf("%d",&a);
	if (n<=a<=m){
	
	for (i=n;i<=m;i++){
		if(i==a){
			goto him;
		}
		printf("%d\n",i);
	}
	him:
		printf("the table of %d:\n",a);
		for (i=1;i<=10;i++){
			printf("%d x %d= %d\n",a,i,a*i);
		}}
	else{
		printf("the number must be in between the range u have entered.");
	}
		return 0;
	}
