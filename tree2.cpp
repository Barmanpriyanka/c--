#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* right;
    node* left;
    
    
    node(int d) {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

int search(int inorder[], int start, int end, int curr) {
    for(int i = start; i <= end; i++) {
        if(inorder[i] == curr) { 
            return i;
        }
    }
    return -1; 
}

node* buildTree(int preorder[], int inorder[], int start, int end) {
    static int idx = 0;
    if (start > end) { 
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    node* root = new node(curr);
    if(start == end) {
        return root; 
    }
    int pos = search(inorder, start, end, curr);
    root->left = buildTree(preorder, inorder, start, pos - 1);
    root->right = buildTree(preorder, inorder, pos + 1, end);
    return root;
}

void preorderprint(node* root) {
    if (root == NULL) {
        return;
    }
    
    cout << root->data << " ";
    preorderprint(root->left);
    preorderprint(root->right);
}

int main() {
    int preorder[] = {3, 9, 20, 15, 7};
    int inorder[] = {9, 3, 15, 20, 7};
    node* root = buildTree(preorder, inorder, 0, 4);
    preorderprint(root);
    return 0;
}