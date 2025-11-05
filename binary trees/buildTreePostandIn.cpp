#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val){
        value = val;
        left = nullptr;
        right = nullptr;
    }

};

Node* buildTree(vector<int> preorder, vector<int> inorder){
    if(preorder.empty()) return nullptr;

    Node* newnode = new Node(preorder[0]);
    
    // find index of this value in inorder
    int idx = 0;
    while(inorder[idx] != newnode->value) idx++;

    // new arrays for left
    vector<int> newpreL(preorder.begin() + 1 ,preorder.begin() + idx + 1);
    vector<int> newinL(inorder.begin() , inorder.begin() + idx);

    // new array for the right
    vector<int> newpreR(preorder.begin() + idx + 1, preorder.end());
    vector<int> newinR(inorder.begin()+idx+1,inorder.end());


    newnode->left = buildTree(newpreL,newinL);
    newnode->right = buildTree(newpreR,newinR);

    return newnode;

}


void preOrderTraversal(Node* root){

    if(root == nullptr) return;

    cout << root->value << "  ";

    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node* root){

    if(root == nullptr) return;

    inOrderTraversal(root->left);
    
    cout << root->value << "  ";

    inOrderTraversal(root->right);
}


int main() {

    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    
    Node* root  = buildTree(preorder,inorder);

    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    return 0;
}