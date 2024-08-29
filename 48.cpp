#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;	
};
struct Node* createnode(int data){
	struct Node* newnode=new Node;
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
	
}
struct Node* insertnode(struct Node* root,int data){
	if(root==NULL){
		return createnode(data);
	}
	if(data<root->data){
		root->left=insertnode(root->left,data);
	}
	else if(data>root->data){
		root->right=insertnode(root->right,data);
	}
	
	return root;
}
void inorder(struct Node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left );
	cout<<root->data<<" ";
	inorder(root->right);
}
int main(){
	int a,i,n;
	struct Node* root=NULL;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		root=insertnode(root,a);
	}
	inorder(root);
	cout<<endl;
}
