#include<bits/stdc++.h>
using namespace std;
stack<char> s;
bool is_balanced(string x) {
	for(int i=0;i<x.length();i++){
		if(x[i]=='('){
			s.push('(');
	}
		else{
			if(s.empty()){
				return false;
			}
			s.pop();
		}
}
	if(s.empty()){
		return true;
	}
	return false;

}
int main(){
	string ss=")((()))";
	if(is_balanced(ss)){
		cout<<"balanced";
	}
	else{
		cout<<"unbalanced";
	}
}
