//to perform shorting ,linear search and binary search using switch case
 int binary(int x[],int y);
  int linear(int x[],int y);
  void reff(int x[],int y);
  #include <stdio.h>
 int main(){
	int i,n,j,h;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("1. linear search\n2.binary search\nenter your choice:");
	scanf("%d",&h);
	swtich(h) {
	
		case 1:
			linear(a,n);
			break;
		case 2:
			binary(a,n);
			break;
		default:
			printf("INVALID INPUT!");}}
			
reff(int x[],int y){
		int i;
		for(i=0;i<y;i++){
			printf("%d ",x[i]);
		}
	}
binary(int a[],int n){
	int b,m,l,y=-1,x;
	b=0;
	l=n-1;
	printf("\nenter the  element u want to search:\n");
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
	return 0;
	}
linear(int a[],int n){
	int x,i,l=-1;
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
