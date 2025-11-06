#include <iostream>
#include <cmath>
using namespace std;


class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int val)
    {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};

int maxwidth(Node* root){
    if(root == nullptr) return 0;

    int leftDepth = maxwidth(root->left);
    int rightDepth = maxwidth(root->right);

    return 1 + max(leftDepth,rightDepth);
}



int main() {
    Node* root;
    int ans =  maxwidth(root);
    cout << "Hello World" << endl;
    return 0;
}