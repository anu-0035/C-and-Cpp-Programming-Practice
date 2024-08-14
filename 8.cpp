#include<iostream>
using namespace std;
void bubble(int a[],int n){
	int k;
	for(int i=1;i<n;i++){
		for (int j=0;j<=n-i-1;j++){
			if(a[j]>a[j+1]){
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
		
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
	bubble(a,n);
	print(a,n);
	return 0;
}
