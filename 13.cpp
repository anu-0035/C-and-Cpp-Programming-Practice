#include<iostream>
using namespace std;

int main(){
	int x,*a;
	a=&x;
	cin>>x;
	cout<<"the value of x:"<<x<<"\n";
	cout<<"the address of x:"<<a<<"\n";
	cout<<"the value of x:"<<*a<<"\n";
	return 0;
}
