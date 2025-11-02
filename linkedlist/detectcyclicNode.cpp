#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

};
void detectCyclicNodeAndRemove(Node* &head) {
    // empty list cas
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* slow = head;
    Node* fast = head;
    bool isCyclic = false;

    
    // slow fast cycle detection
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        // if slow = fastt, cycle 
        if (slow == fast) {
            isCyclic = true;
            break;
        }
    }

    // if no cycle , exit
    if (!isCyclic) {
        return;
    }

    // find the starting node
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    // Now both meet at the start node of the cycle

    // find the last node in the cycle (the one whose next points to cycle start)
    while (fast->next != slow) {
        fast = fast->next;
    }

    // Step 6: Break the cycle
    fast->next = nullptr;
}
int main() {
    cout << "Hello World" << endl;
    return 0;
}