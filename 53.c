reff(int x[],int y);
#include<stdio.h>
int main(){
	
	int n,i,x,c;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the index where u want to put the element: ");
	scanf("%d",&i);
	printf("enter the value  u want to put the element: ");
	scanf("%d",&x);
	for(c=sizeof(a);c>i;c--){
		a[c]=a[c-1];
	}
	a[i]=x;
	reff(a,sizeof(a));
	return 0;
}
reff(int x[],int y){
		int i;
		for(i=0;i<y;i++){
			printf("%d ",x[i]);
		}
	}
	
	
