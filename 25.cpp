#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node(){
			data =0;
			next=NULL;
		}
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
	
};
class linkedlist{
	Node *head;
	public:
		linkedlist(){
			head=NULL;
		}
		void display(){
			Node *temp=head;
			if(head=NULL){
				cout<<"list is empty\n";
				return;
			}
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}	
		}
		void insertnode(int data){
			Node *newnode=new Node(data);
			if(head==NULL){
				head=newnode;
				return;
			}
			Node *temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
		}
};
int main(){
	linkedlist l;
	l.insertnode(10);
	l.display();
}
