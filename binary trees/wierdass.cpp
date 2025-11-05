#include <iostream>
#include <vector>
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

    // new arrays for left subtree
    vector<int> newpreL(preorder.begin() + 1, preorder.begin() + 1 + idx);
    vector<int> newinL(inorder.begin(), inorder.begin() + idx);

    newnode->left = buildTree(newpreL, newinL);

    // new arrays for right subtree
    vector<int> newpreR(preorder.begin() + 1 + idx, preorder.end());
    vector<int> newinR(inorder.begin() + 1 + idx, inorder.end());

    newnode->right = buildTree(newpreR, newinR);

    return newnode;
}

int main() {
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    
    Node* root = buildTree(preorder,inorder);
    cout << "Tree built successfully!\n";
    return 0;
}
