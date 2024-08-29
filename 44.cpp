#include<bits/stdc++.h>
#include<stack>
using namespace std;
int preference(char c){
	if(c=='+' || c=='-'){
		return 1;
	}
	else if(c=='*' || c=='/'){
		return 2;
	}
	else if(c=='^'){
		return 3;
	}
}
string convert(string s){
	string a;
	stack<char> st;
	for(int i=0;i<s.length();i++){
		char c=s[i];
		if(c>='a' && c<='z' ||c>='A' && c<='Z' ||c>='0' && c<='9' ){
			a+=c;
		}
		else if(c=='('){
			st.push(c);
		}
		else if(c==')'){
			while(st.top()!='('){
				a+=st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while(!st.empty() && preference(c)<=preference(st.top())){
				a+=st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while(!st.empty()){
		a+=st.top();
		st.pop();
	}
	return a;
}
int main(){
	string s;
	cin>>s;
	cout<<convert(s);
}
