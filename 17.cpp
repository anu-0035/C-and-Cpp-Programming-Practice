#include <iostream>
using namespace std;

// structure to define a node of the doubly linked list
struct node{

// part which will store data
int data;
// pointer to the previous node
node *prev;
// pointer to the next node
node *next;

};

// function to insert a new node with given data in the front of the doubly linked list
void insert_at_front(node** head, int data){

// create a new node with given data
node* new_node = new node();
new_node->data = data;

// assign previous pointer to NULL
new_node->prev = NULL;

// assign next pointer to the current head node
new_node->next = (*head);

// if the list is not empty, set the current head's previous pointer to new node
if((*head) != NULL){
(*head)->prev = new_node;
}

// point the head to the new node
(*head) = new_node;

return;

}

int main() {

// we will create a doubly linked list of size 4

// create a pointer to the head node
node *head = NULL;

// create a pointer to end node
node *end = NULL;

// call the insert_at_front function four times
insert_at_front(&head, 1);
insert_at_front(&head, 2);
insert_at_front(&head, 3);
insert_at_front(&head, 4);

// print the list in forward direction
cout<<"In forward direction:"<<endl;

while(head != NULL){
end = head;
cout<<head->data<<" ";
head = head->next;
}

cout<<endl;

// print the list in backward direction
cout<<"In backward direction:"<<endl;

while(end != NULL){
cout<<end->data<<" ";
end = end->prev;
}

return 0;
}
