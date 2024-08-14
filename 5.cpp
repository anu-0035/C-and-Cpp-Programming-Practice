#include<iostream>
using namespace std;
void db(int x){
	int b[32],i=0;
	while(x>0){
		b[i]=x%2;
		x/=2;
		i++
	;}
	for (int j=i-1;j>=0;j--){
		cout<<b[j];
	}
	
}
int main(){
	int a;
	cin>>a;
	db(a);
	return 0;
	
}
