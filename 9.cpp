#include<iostream>
using namespace std;
void print(int a[],int x){
	for(int i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
}
void selection(int a[], int n){
	for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
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
	selection(a,n);
	print(a,n);
	return 0;
}
