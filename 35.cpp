#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of the queqe: ";
	cin>>n;
	int a[n];
	cout<<"enter the elment:\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	priority_queue<int> pq;
	cout<<"before queue elment: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	for(int i=0;i<n;i++){
		pq.push(a[i]);
	}
	cout<<"\npriority queue elment: ";
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
}
