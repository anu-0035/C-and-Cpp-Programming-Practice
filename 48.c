//input ,address,min & max,
#include<stdio.h>
int main(){
	int a[100],n,i,x=0,min,max;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	printf("the elements of aaray are: \n");
	printf("%d\n",&a[0]);
	printf("%u \n",a);
	for (i=0;i<n;i++){
		printf("%d ",&a[i]);
		
	
	}
	for (i=0;i<n;i++){
		x+=a[i];}
	printf("\nthe sum of the array is: %d\n",x);
	min=a[0];
	max=a[0];
	for (i=1;i<n;i++){
		if (min>a[i]){
			min=a[i];
		}
		if (max<a[i]){
			max=a[i];
		}
		}
		printf("the max: %d & min: %d\n",max,min);
	return 0;
	
}

