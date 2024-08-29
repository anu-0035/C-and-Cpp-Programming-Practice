//array call by refference
void reff(int x[],int y);
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
	reff(a,n);
	return 0;}
	reff(int x[],int y){
		int i;
		for(i=0;i<y;i++){
			printf("%d ",x[i]);
		}
	}
	
