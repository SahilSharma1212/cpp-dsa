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


int mindifHelper(Node* root, int &prev, int &ans){
    if(!root) return abs(ans);
    if(prev != -1){
        ans = min(ans, abs(prev - root->value));
    }
    prev = root->value;
    mindifHelper(root->left, prev, ans);
    mindifHelper(root->right, prev, ans);   


}

int minDIff(Node* root){
    int leftdiff = INTMAX_MAX, rightdiff = INTMAX_MAX;

    if(root->right == nullptr && root->left == nullptr){
        return INTMAX_MAX;
    }
    if(root->left){
        leftdiff = min(abs(root->value - root->left->value), minDIff(root->left));
    }
    if(root->right){
        rightdiff = min(abs(root->value - root->right->value), minDIff(root->right));
    }

}

int main() {
    vector<int> a = {31,8,6,2,35,85,12,643};

    Node* root = new Node(a[0]);
    int n =a.size();

    for(int i = 1; i < n; i++){
        buildBST(root, a[i]);
    }

    inOrderTraversal(root);

    cout << endl << searchInBST(root, 6) << endl;

    cout << minDIff(root);

    return 0;
}