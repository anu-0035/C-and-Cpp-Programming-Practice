#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;	
	}
};

Node *buildtree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	Node* root=new Node(data);
	root->left=buildtree();
	root->right=buildtree();
	return root;
}
bool isBST(Node* root,int x=INT_MIN,int y=INT_MAX){
	if(root==NULL){
		return true;
	}
	if(root->data<x || root->data>y){
		return false;
	}
	return isBST(root->left,x,root->data-1) &&
	 isBST(root->right,root->data+1,y)	;
}
int main(){
	Node* root=buildtree();
	if(isBST(root)){
		cout<<"yes";
	}
}



