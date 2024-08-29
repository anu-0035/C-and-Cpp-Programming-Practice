#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
};
void insert(node** head,int a){
	node* newnode=new node;
	newnode->next=NULL;
	newnode->data=a;
	
	if(*head==NULL){
		newnode->prev=NULL;
		*head=newnode;
		return;
	}
	node* temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
}

void printforward(node* head){
	if(head==NULL){
		cout<<"list is empty.\n";
		return;
	}
	node* temp=head;
	cout<<"forward list traversal: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void printbackwards(node* head){
	if(head==NULL){
		cout<<"list is empty.\n";
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	cout<<"backward list traversal: ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->prev;
	}
	cout<<endl;
}
bool search(node* head ,int a){
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==a){
			return true;
		}
		temp=temp->next;
	}
	return false;
}
int main(){
	node* head=NULL;
	insert(&head,3);
	insert(&head,6);
	insert(&head,70);
	insert(&head,0);	
	printforward(head);
	printbackwards(head);
	if(search(head,4)){
		cout<<"found\n";
	}
	else{
		cout<<"Not found\n";
	}
	
}



