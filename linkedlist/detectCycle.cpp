#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

};

bool detectCycle(Node* &head){
    if(head == nullptr){
        return false;
    }
    
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;
    }
    return false;
}

int main() {
    cout << "Hello World" << endl;
    return 0;
}