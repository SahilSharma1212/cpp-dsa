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

void buildBST(Node* root, int num){

    if( num > root->value ){
        if(root->right == nullptr){
            Node* newnode = new Node(num);
            root->right = newnode;
            return;
        }else{
            buildBST(root->right, num);
        }
    }else{
        if(root->left == nullptr){
            Node* newnode = new Node(num);
            root->left = newnode;
            return;
        }else{
            buildBST(root->left, num);
        }
    }
    return;

}

void inOrderTraversal(Node* root){

    if(root == nullptr) return;

    
    inOrderTraversal(root->left);
    cout << root->value << "  ";
    inOrderTraversal(root->right);
}

bool searchInBST(Node* root, int key){
    if(root == nullptr) return false;
    
    if(root->value == key) return true;
    
    if(key > root->value){
        return searchInBST(root->right, key);
    }else{
        return searchInBST(root->left, key);
    }
}

int main() {
    vector<int> a = {31,4,6,2,35,85,3,643};

    Node* root = new Node(a[0]);
    int n =a.size();

    for(int i = 1; i < n; i++){
        buildBST(root, a[i]);
    }

    inOrderTraversal(root);

    cout << endl << searchInBST(root, 6);

    return 0;
}