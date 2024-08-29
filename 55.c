//linear search
#include<stdio.h>
int main(){
	int i,l=-1,x,n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	printf("enter the  element u want to search:\n");
	scanf("%d",&x);
	for (i=0;i<n;i++){
		if (a[i]==x){
			l=i;
			break;
		}
	}
	if(l!=-1){
		printf("MATCH FOUND! the element is at %d position",l+1);
	}
	else{
		printf("MATCH  NOT FOUND!" );
		}
	return 0;
	
}
