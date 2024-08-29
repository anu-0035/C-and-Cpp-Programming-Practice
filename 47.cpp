#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* createnode(int data){
	struct node* newnode=new node;
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
}
struct node* insertnode(struct node* root,int data){
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
void postorder(struct node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}
void preorder(struct node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	postorder(root->left);
	postorder(root->right);
	
	
}
void inorder(struct node* root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	cout<<root->data<<" ";
	postorder(root->right);
	
	
}
int main(){
	struct node* root=NULL;
	int a,i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		root=insertnode(root,a);
	}
	postorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	inorder(root);
}
