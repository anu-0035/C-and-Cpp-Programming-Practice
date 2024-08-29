//array call by value
void value(int y);
#include<stdio.h>
int main(){
	int a[100],n,i,x=0,min,max;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	printf("\n element by reference:\n");
	for(i=0;i<n;i++){
			value(a[i]);
		}
	return 0;}
	value(int y){
		
			printf("%d ",y);
		}
	
	
