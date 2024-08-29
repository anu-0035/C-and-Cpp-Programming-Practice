#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h){
	int s=l,e=h,p=a[l];
	while(s<e){
		while(a[s]<=p){
			s++;
		}
		while(a[e]>p){
			e--;
		}
		if(s<e){
			swap(a[s],a[e]);
		}	
	}
	swap(a[l],a[e]);
	return e;
}

void quicksort(int a[],int l,int h){
	if(l<h){
		int loc=partition(a,l,h);
		quicksort(a,l,loc-1);
		quicksort(a,loc+1,h);
	}
}
void swap(int x,int y){
	int t=x;x=y;y=t;
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}


int main(){
	int a[]={1,99,6,-8,6,3};
	quicksort(a,0,5);
	print(a,6);
}
