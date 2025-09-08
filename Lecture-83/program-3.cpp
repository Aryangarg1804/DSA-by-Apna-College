#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = right = NULL;
        }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); // LEFT
    root->right = buildTree(preorder); // RIGHT

    return root;
}

// Inorder 
void InOrder(Node* root){
    if(root == NULL){
        return;
    }

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

int main(){

    // Binary tree
    // Inorder traversal
    
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);
    InOrder(root);

    return 0;
}