
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Create a list of integers
    list<int> myList;

    // Inserting elements
    myList.push_back(10); // Insert at end
    myList.push_back(20);
    myList.push_front(5); // Insert at beginning
    myList.push_back(30);

    cout << "List after insertion: ";
    for (int x : myList)
    {
        cout << x << " ";
    }
    cout << endl;

    // Removing elements
    myList.pop_front(); // Remove first element
    myList.pop_back();  // Remove last element

    cout << "List after popping front and back: ";
    for (int x : myList)
    {
        cout << x << " ";
    }
    cout << endl;

    // Inserting at specific position (before second element)
    auto it = myList.begin();
    ++it; // move iterator to 2nd element
    myList.insert(it, 15);

    cout << "List after inserting 15: ";
    for (int x : myList)
    {
        cout << x << " ";
    }
    cout << endl;

    // Removing specific value
    myList.remove(20);

    cout << "List after removing 20: ";
    for (int x : myList)
    {
        cout << x << " ";
    }
    cout << endl;

    // Sorting the list
    myList.push_back(25);
    myList.push_back(7);
    myList.sort();

    cout << "List after sorting: ";
    for (int x : myList)
    {
        cout << x << " ";
    }
    cout << endl;

    // Reversing the list
    myList.reverse();

    cout << "List after reversing: ";
    for (int x : myList)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
