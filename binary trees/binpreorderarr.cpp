#include <iostream>
#include <vector>
#include <map>
#include <queue>
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

static int idx = -1;

Node* buildTree(vector<int> &perOrder){
    idx++;

    if(perOrder[idx] == -1) return nullptr;

    Node* root = new Node(perOrder[idx]);

    root->left = buildTree(perOrder);
    root->right = buildTree(perOrder);

    return root;
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

void postOrderTraversal(Node* root){

    if(root == nullptr) return;

    postOrderTraversal(root->left);
    
    postOrderTraversal(root->right);
    
    cout << root->value << "  ";

}

void levelOrder(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        cout << curr->value << " ";

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

int heightOfTree(Node* root){

    if(root == nullptr) return 0;

    int leftht = heightOfTree(root->left);
    int rightht = heightOfTree(root->right);

    return 1+max(leftht,rightht);

};

bool treeIdentical(Node* root1, Node* root2){

    // both emty
    if (root1 == nullptr && root2 == nullptr)
        return true;

    // one empty
    if (root1 == nullptr || root2 == nullptr)
        return false;

    // compare
    if (root1->value != root2->value)
        return false;

    bool leftsimilarity = treeIdentical(root1->left, root2->left);
    bool rightsimilarity = treeIdentical(root1->right, root2->right);

    return (leftsimilarity && rightsimilarity);

}

bool isASubtree(Node* mainTree, Node* subTree){
    

}

int diameterOfTree(Node* root){
    if(root == nullptr) return 0;

    int leftDiameter = diameterOfTree(root->left);
    int rightDiameter = diameterOfTree(root->right);

    int currDiameter = heightOfTree(root->left) + heightOfTree(root->right);

    return max(currDiameter, max(leftDiameter, rightDiameter));

}

static int ans;

int diameterFromHeight(Node* root){

    if(root == nullptr) return 0;

    int leftht = diameterFromHeight(root->left);
    int rightht = diameterFromHeight(root->right);

    ans = max(leftht+rightht, ans);

    return max(leftht, rightht) + 1;

}


void topView(Node* root){
    map<int,int> mp;
    queue<pair<Node*,int>> q;
    q.push({root, 0});

    while(!q.empty()){

        pair<Node*,int> curr = q.front();

        Node* node = curr.first;
        int hd = curr.second;
        q.pop();


        if(mp.find(hd) == mp.end()){
            mp[hd] = node->value;
        }

        if(node->left) q.push({node->left,hd-1});
        if(node->right) q.push({node->right,hd+1});
    }

    for(auto it : mp)
        cout << it.second << " ";
}


void kthLevelOfTree(Node* root, int lvl, int k){

    if(root == nullptr) return;

    if(lvl == k){
        cout << root->value << " , ";
        return;
    }
    
    // Recurse only if current level < k
    kthLevelOfTree(root->left, lvl + 1, k);
    kthLevelOfTree(root->right, lvl + 1, k);

}


void lvlordrtrvrsal(Node* root){
    if(!root) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* curr = q.front();
        q.pop();
        cout << curr->value << " , ";

        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }

}


Node* LCA(Node* root, int p, int q){
    if(root == nullptr) return nullptr;

    if(root->value == p || root->value == q){
        return root;
    }

    Node* leftans = LCA(root->left, p, q);
    Node* rightans = LCA(root->right, p, q);
    
    
    // boths return non-null, current node is LCA
    if (leftans != nullptr && rightans != nullptr)
        return root;

    // one side null, return the other
    return (leftans != nullptr) ? leftans : rightans;
}

int main() {
    cout << "Hello World" << endl;

    vector<int> preOrder = {2,1,-1,-1,3,4,-1,-1,5,-1,-1,6,-1,-1};

    Node* root = buildTree(preOrder);

    preOrderTraversal(root);

    cout << endl;

    inOrderTraversal(root);

    cout << endl;

    postOrderTraversal(root);


    return 0;
}