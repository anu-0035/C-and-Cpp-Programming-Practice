#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int r){
	int i=l,j=m+1,k=l;
	int b[r+1];
	while(i<=m && j<=r){
		if(a[i]<=a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>m){
		while(j<=r){
		
		b[k]=a[j];j++;k++;}
	}
	else{
		while(i<=m){
		b[k]=a[i];
		i++;k++;
		}
	}
	for(k=l;k<=r;k++){
		a[k]=b[k];
	}	
}
void mergesort(int a[],int l, int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	
}}
int main(){
	int a[]={1,55,3,4,7,-9,0};
	mergesort(a,0,6);
	for(int k=0;k<=6;k++){
		cout<<a[k]<<" ";
	}
}
