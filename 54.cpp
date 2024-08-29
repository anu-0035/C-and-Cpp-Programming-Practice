#include<bits/stdc++.h>
using namespace std;
int part(int a[],int l,int h){
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
void sorts(int a[],int l,int h){
	if(l<h){
		int loc=part(a,l,h);
		sorts(a,l,loc-1);
		sorts(a,loc+1,h);
	}
}
int main(){
	int a[]={1,3,4,5,66,2,34,2};
	sorts(a,0,7);
	for(int i=0;i<8;i++){
		cout<<a[i]<<" ";
	}
}

