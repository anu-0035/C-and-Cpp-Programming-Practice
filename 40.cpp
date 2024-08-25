#include<iostream>
using namespace std;
struct node{
int data;
struct node *left,*right;
};
struct node *newNode(int value){
struct node *temp=(struct node *)malloc(sizeof(struct node));
temp->data=value;
temp->left=temp->right=NULL;
return temp;
}
void inorder(struct node *root){
if(root!=NULL){
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}
}
struct node *insert(struct node *node,int data){
if(node==NULL)
return newNode(data);
if(data<node->data)
node->left=insert(node->left,data);
else
node->right=insert(node->right,data);
return node;
}
struct node *minNode(struct node *node){
struct node *current=node;
while(current && current->left!=NULL)
current=current->left;
return current;
}
void search(node *root,int data){
int depth=0;
node *temp=new node;
temp=root;
while(temp!=NULL){
depth++;
if(temp->data==data){
cout<<"\n data found at deapth "<< depth;
return;
}
else if(temp->data>data)
temp=temp->left;
else
temp=temp->right;
}
cout<<"\n Data not found ";
return;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
// Return if the tree is empty
if (root == NULL) return root;


if (key < root->data)
root->left = deleteNode(root->left, key);
else if (key > root->data)
root->right = deleteNode(root->right, key);
else {

if (root->left == NULL) {
struct node *temp = root->right;
free(root);
return temp;
} else if (root->right == NULL) {
struct node *temp = root->left;
free(root);
return temp;
}


struct node *temp = minNode(root->right);


root->data = temp->data;

root->right = deleteNode(root->right, temp->data);
}
return root;
}

int main(){
struct node *root=NULL;
root=insert(root,18);
root=insert(root,13);
root=insert(root,11);
root=insert(root,16);
root=insert(root,21);
root=insert(root,23);
root=insert(root,28);
inorder(root);
search(root,21);
root=deleteNode(root,13);
cout<<"After deleting "<<endl;
inorder(root);
return 0;
}
