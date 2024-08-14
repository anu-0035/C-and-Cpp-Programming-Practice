#include<iostream>
using namespace std;
int main(){
	int a[4],b[3],c[7];
	cout<<"enter the elements of a \n";
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	cout<<"enter the elements of b \n";
	for(int i=0;i<3;i++){
		cin>>b[i];
	}
	int i=0;
	for(i;i<4;i++){
		c[i]=a[i];	
	}
	for(int k=0;k<3;k++){
		c[i]=b[k];
		i++;
	
	}
	for(int i=0;i<7;i++){
		cout<<c[i]<<" ";
	}
	
	return 0;
}
