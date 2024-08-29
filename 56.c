//binary search
#include<stdio.h>
int main(){
	int i,y=-1,x,n,b,m,l;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b=0;
	l=n-1;
	printf("enter the  element u want to search:\n");
	scanf("%d",&x);
	while(b<=l){
		m=(b+l)/2;
		if(a[m]==x){
			y=m;
			break;
		}
		else if(a[m]>x){
			l=m-1;
		}
		else if(a[m]<x){
			b=m+1;
		}
	}
	if(y!=-1){
		printf("MATCH FOUND! the element is at %d position",y+1);
	}
	else{
		printf("MATCH  NOT FOUND!" );
		}
	return 0;}
	
