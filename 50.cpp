#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

void kthSmallestUtil(Node* root, int& k, int& result) {
    if (root == NULL)
        return;

    kthSmallestUtil(root->left, k, result);

    k--;
    if (k == 0) {
        result = root->data;
        return;
    }

    kthSmallestUtil(root->right, k, result);
}

int kthSmallest(Node* root, int k) {
    int r = -1;
    kthSmallestUtil(root, k, r);
    return r;
}

int main() {
    Node* root = NULL;
    int n, k;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    cin >> k;

    int kthSmallestElement = kthSmallest(root, k);
    cout << kthSmallestElement;

    return 0;
}

