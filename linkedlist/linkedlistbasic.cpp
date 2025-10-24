#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Insert node at the end
void insertAtBack(Node *&head, int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = nullptr;

    // Case 1: Empty list
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    // Case 2: Traverse to end
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Display the entire linked list
void display(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Delete the last node
void deleteAtBack(Node *&head)
{
    // Case 1: Empty list
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }

    // Case 2: Only one node
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        cout << "Deleted last remaining node\n";
        return;
    }

    // Case 3: More than one node
    Node *curr = head;
    Node *prev = nullptr;

    while (curr->next != nullptr)
    {
        prev = curr;
        curr = curr->next;
    }

    // Now curr = last node, prev = second-last
    prev->next = nullptr;
    delete curr;
    cout << "Deleted last node successfully\n";
}

// Delete a node by value
void deleteNodeByValue(Node *&head, int val)
{
    // Case 1: Empty list
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }

    // Case 2: If head is to be deleted
    if (head->data == val)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted head node\n";
        return;
    }

    // Case 3: Delete from middle or end
    Node *prev = head;
    Node *curr = head->next;

    while (curr != nullptr && curr->data != val)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr)
    {
        cout << "Value not found\n";
        return;
    }

    prev->next = curr->next;
    delete curr;
    cout << "Deleted node with value " << val << endl;
}

void insertAtBegining(Node *&head, int val)
{
    if (head == nullptr)
    {
        head = new Node();
        head->data = val;
        head->next = nullptr;
        return;
    }
    else
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
}

void insertAtPosition(Node *&head, int val, int pos)
{
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = nullptr;

    // Case 1: Insert at beginning
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Case 2: Insert at middle or end

    Node* curr;
    curr = head;
    int count=1;

    // traverse to the position

    while(curr != nullptr && count < pos-1){
        curr = curr->next;
        count++;
    }

    // If position is invalid (too large)
    if (curr == nullptr) {
        cout << "Position out of range\n";
        delete newNode; // avoid memory leak
        return;
    }

    // insertion step

    newNode->next = curr->next;
    curr->next = newNode;

}

int main()
{
    Node *head = nullptr;

    insertAtBack(head, 10);
    insertAtBack(head, 20);
    insertAtBack(head, 30);

    cout << "Initial Linked List: ";
    display(head);

    deleteAtBack(head);
    cout << "After deleting last node: ";
    display(head);

    deleteNodeByValue(head, 10);
    cout << "After deleting node with value 10: ";
    display(head);

    return 0;
}
