#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(){
		data=0;
		next=NULL;
	}
	Node(int data){
		this->data =data;
		this->next =NULL;
	}	
		
};
class linkedlist{
	Node* head;
	public:
		linkedlist(){
			head=NULL;
		}
	void insertnode(int);
	void display();
	void deletenode(int);
};
void linkedlist::deletenode(int nodeoff){
	Node *t1=head,*t2=NULL;//temp values
	int l=0;//length of list
	if(head==NULL){
		cout<<"\nlist is empty\n";
		return;
	}
	while(t1!=NULL){
		t1=t1->next;
		l++;
	}	
	if(l<nodeoff){
		cout<<"\nindex out of range\n";
	}
	t1=head;
	if(nodeoff==1){
		head=head->next;
		delete t1;
		return;
	}
	while(nodeoff-->1){
		t2=t1;
		t1=t1->next;
	}
	t2->next=t1->next;
	delete t1;
}
void linkedlist::insertnode(int data){
	Node* newnode= new Node(data);
	if (head== NULL){
		head=newnode;
		return;
	}
	Node* temp=head;
	while(temp->next!= NULL){
		temp=temp->next;
	}
	temp->next=newnode;
}
void linkedlist::display(){
	Node* temp=head;
	if(head==NULL){
		cout<<"list is empty.\n";
		return;
	}
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main(){
	linkedlist l;
	l.insertnode(10);
	l.insertnode(20);
	l.insertnode(30);
	l.insertnode(40);
	l.insertnode(50);
	cout<<"the list is:";
	l.display();
	l.deletenode(3);
	cout<<"\nlist after deletion: "
	;l.display();
return 0;	
}
