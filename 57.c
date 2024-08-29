//bubble sort
#include<stdio.h>
int main(){
	int i,n,j,h;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	for (i=0;i<n-1;i++){
			for (j=0;j<n-i-1;j++){
				if (a[j]>a[j+1]){
					h=a[j];
					a[j]=a[j+1];
					a[j+1]=h;
				}
			}
	}
	printf("\n");
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;}
