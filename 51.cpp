#include <iostream>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert a new node at the end of the list
void insertAtEnd(Node** head, int newData) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    // If the list is empty, set the new node as the head
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    // Traverse to the last node
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Update pointers of the new node and last node
    current->next = newNode;
    newNode->prev = current;
}

// Traverse and print the doubly linked list forward
void traverseListForward(Node* head) {
    cout << "Doubly Linked List (Forward): ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Traverse and print the doubly linked list backward
void traverseListBackward(Node* head) {
    // Traverse to the last node
    while (head->next != NULL) {
        head = head->next;
    }

    cout << "Doubly Linked List (Backward): ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->prev;
    }
    cout << endl;
}

// Search for a node with a given value in the list
bool searchNode(Node* head, int searchData) {
    while (head != NULL) {
        if (head->data == searchData) {
            return true;
        }
        head = head->next;
    }
    return false;
}

// Delete a node with a given value from the list
void deleteNode(Node** head, int deleteData) {
    // If the list is empty, return
    if (*head == NULL) {
        return;
    }

    // If the node to be deleted is the head node
    if ((*head)->data == deleteData) {
        Node* temp = *head;
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        delete temp;
        return;
    }

    // Find the node to be deleted
    Node* current = *head;
    while (current != NULL && current->data != deleteData) {
        current = current->next;
    }

    // If the node was not found, return
    if (current == NULL) {
        return;
    }

    // Update pointers of adjacent nodes and delete the node
    current->prev->next = current->next;
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    delete current;
}

int main() {
    Node* head = NULL;

    // Insert nodes at the end
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    // Traverse the list forward
    traverseListForward(head);

    // Traverse the list backward
    traverseListBackward(head);

    // Search for a node with value 2
    if (searchNode(head, 2)) {
        cout << "Node with value 2 found in the list." << endl;
    } else {
        cout << "Node with value 2 not found in the list." << endl;
    }

    // Delete a node with value 2 from the list
    deleteNode(&head, 2);

    // Traverse the list forward after deletion
    insertAtEnd(&head, 30);
    traverseListForward(head);
    

    return 0;
}
