//proram to ask the user any random numbers the apply bubble sort to arrange it and then binary search on it
 void reff(int x[],int y);
 int bubble(int x[],int y);
 int binary(int x[],int y);
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
	bubble(a,n);
	reff(a,n);
	binary(a,n);
	
}
  reff(int x[],int y){
		int i;
		for(i=0;i<y;i++){
			printf("%d ",x[i]);
		}
	}
	bubble(int a[],int y){
		int i,j,h;
			for (i=0;i<y-1;i++){
			for (j=0;j<y-i-1;j++){
				if (a[j]>a[j+1]){
					h=a[j];
					a[j]=a[j+1];
					a[j+1]=h;
				}
			}
	}
	
	return a;}
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

