#include <iostream>
using namespace std;

class Teacher {
public:
    string name;
    string subject;

    // constructor, sets a default value
    Teacher() {
        subject = "CSE"; 
    }

    Teacher(string name, string subject){
        this->name = name;
        this->subject = subject;
    }

    Teacher(Teacher &orgObj){
        cout << "Custom Copy Constructor" << endl;
        this->name = orgObj.name;
        this->subject = orgObj.subject;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Teacher t1;            // object created
    t1.name = "Sahil 1";     // assigning value
    t1.display();          // method call

    Teacher t2("Sahil 2", "ETC");

    t2.display();

    Teacher t3(t2);
    t3.display();

    return 0;
}
