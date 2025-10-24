#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void reverseLinkedList(Node* &head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while(curr != nullptr){
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
};

int main() {
    cout << "Hello World" << endl;
    return 0;
}