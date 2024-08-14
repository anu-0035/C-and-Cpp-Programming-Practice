//insertion algorithm
#include<iostream>
using namespace std;
int main()
{
	int n,v,k;
	cout<<"enter the no of element of aaray:";
	cin>>n;
	int a[n],j=n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	cout<<"enter the value which u want to insert in aaray:";
	cin>>v;
	cout<<"enter the value where u want to insert in aaray:";
	cin>>k;
	n++;
	while(j>=k){
		a[j+1]=a[j];
		j--;
	}
	a[k]=v;
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
    return 0;
}
