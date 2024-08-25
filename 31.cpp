
/*#include<iostream>
#include <string>
#include <stack>
using namespace std;

int precedence(char op){
switch(op){
case '+':
case '-':
return 1;
break;
case '*':
case '/':
return 2;
break;
case '^':
return 3;
break;
default:
return -1;
break;
}

}
void infixToPostfix(string infx){
	int i,j;
	stack<char> st;
	string result;
	for(i=0;i<infx.length();i++){
			char c=infx[i];
			if((c>='a' && c<='z')||(c>='A' && c<='Z')||(c>='0' && c<='9'))
				result +=c;
			else if(c=='(')
				st.push('(');
			else if(c==')'){
				while(st.top()!='('){
					result +=st.top();
					st.pop();
				}
				st.pop();
			}
			else {
				while(!st.empty() && precedence(infx[i]) <= precedence(st.top())){
				result +=st.top();
				st.pop();
			}
			st.push(c);
			}
	}
	while(!st.empty()){
		result +=st.top();
		st.pop();
	}
	cout<<"Postfix Expression is: "<<result<<endl;
}


int main(){
string s;
getline(cin,s);
infixToPostfix(s);

return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
void swap(int x,int y){
	int t=x;x=y;y=t;
}
int partition(int a[],int l,int h){
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

void quicksort(int a[],int l,int h){
	if(l<h){
		int loc=partition(a,l,h);
		quicksort(a,l,loc-1);
		quicksort(a,loc+1,h);
	}
}

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[]={1,99,6,-8,6,3};
	quicksort(a,0,5);
	print(a,6);
}
