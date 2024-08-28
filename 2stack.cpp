#include<bits/stdc++.h>
using namespace std;
int s[5];
int t1=-1,t2=5;
void pop1(){
	if(t1==-1){
		cout<<"stack1 underflow"<<endl;
	}
	else{
		int x=s[t1];
		//delete s[t1];
		t1--;
		cout<<"poped element is: "<<x<<endl;
	}
}
void pop2(){
	if(t2==5){
		cout<<"stack2 underflow"<<endl;
	}
	else{
		int x=s[t2];
		//delete s[t2];
		t1++;
		cout<<"poped element is: "<<x<<endl;
	}
}
int push1(int x){
	if(t1+1==t2){
		cout<<"stack1 overflow"<<endl;
	}
	else{
		t1++;
		s[t1]=x;
		cout<<"element added to stack 1"<<endl;
	}
}
int push2(int x){
	if(t2-1==t1){
		cout<<"stack2 overflow"<<endl;
	}
	else{
		t2--;
		s[t2]=x;
		cout<<"element added to stack 2"<<endl;
	}
}
int peak1(){
	if(t1==-1){
		cout<<"Stack1 is empty"<<endl;
	}
	else{
		cout<<s[t1];
	}
}
int peak2(){
	if(t2==5){
		cout<<"Stack2 is empty"<<endl;
	}
	else{
		cout<<s[t2];
	}
}
void print1(){
	if(t1==-1){
		cout<<"Empty Stack"<<endl;
	}
	else{
		for(int i=t1;i>=0;i--){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
}
void print2(){
	if(t2==5){
		cout<<"Empty Stack"<<endl;
	}
	else{
		for(int i=t2;i<5;i++){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
}
 void empty1(){
	if(t1==-1){
		cout<<"stack1 is empty"<<endl;
	}
	else{
		cout<<"Stack1 is Not empty"<<endl;
	}
}
 void empty2(){
	if(t2==5){
		cout<<"stack2 is empty"<<endl;
	}
	else{
		cout<<"Stack2 is Not empty"<<endl;
	}
}
bool full1(){
	if(t1+1==t2){
		return true;
	}
	else{
		return false;
	}
}
bool full2(){
	if(t1==t2-1){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	push1(1);
	push2(2);
	push1(3);
	push2(4);
	push1(5);
	print1();
	print2();
	push1(4);
	push2(22);
	pop1();
	pop2();
	print1();
	print2();
}




