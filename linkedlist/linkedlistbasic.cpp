#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertAtBack(Node *&head, int val)
{

    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = nullptr;

    // case 1: empty list
    if (head == nullptr)
    {
        head = newNode;
        return; // return immediately
    }

    // case 2: list already has nodes
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    return;
}

void display(Node* head) {
    Node* temp = head;             // start from head
    while (temp != nullptr) {      // until end of list
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteAtBack(Node* &head){
    
    // IF LIST IS EMPTY 
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    Node* curr = head, *prev = nullptr;

    

    // deleting at end
    while(curr->next != nullptr){
        prev->data = curr->data;
        curr = curr->next;
    }
    prev->next = nullptr;
    delete curr;
    
}

void deleteNodeByValue(Node* &head, int val){
    // IF LIST IS EMPTY 
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // if head is the node
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "deleted the only element in ll, it is now empty";
        return;
    }

    // Case 3: Delete somewhere in the middle or end
    Node* prev = head;
    Node* curr = head->next;

    while(curr->data != val){
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr) {
        cout << "Value not found\n";
        return;
    }

    prev->next = curr->next;
    delete curr;
}


int main()
{
    Node* head = nullptr;  // initially list is empty

    insertAtBack(head, 10);
    insertAtBack(head, 20);
    insertAtBack(head, 30);

    cout << "Linked List: ";
    display(head);

    return 0;
}