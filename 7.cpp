#include<iostream>
using namespace std;
void insertion(int a[],int n){
	int j,k;
	for(int i=1;i<n;i++){
		j=i-1;
		k=a[i];
		while(j>=0 && a[j]<k){
			a[j+1]=a[j];
			--j;
		}
		a[j+1]=k;
	}
}
void print(int a[],int x){
	for(int i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"enter the size of array:";
	cin>>n;
	int a[n];
	cout<<"enter the elemnt of array: \n";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	insertion(a,n);
	print(a,n);
	return 0;
}
