#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* middleofLL(Node* &head){

    if(head == nullptr){
        cout << "List is empty";
        return nullptr;
    }

    Node* temp = head;
    Node* mid = head;
    int count = 0;

    while(temp != nullptr){
        count++;
        temp = temp->next;
        if(count%2 == 0){
            mid = mid->next;
        }
        
        count++;
        temp = temp->next;
    }

}


Node* middleofLLSlowFast(Node* &head){
    if (head == nullptr) {
        cout << "List is empty";
        return nullptr;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;     }

    return slow;
}

int main() {
    cout << "Hello World" << endl;
    return 0;
}