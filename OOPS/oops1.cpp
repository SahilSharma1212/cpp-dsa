#include <iostream>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }
};


int main() {
    cout << "Hello World" << endl;

    Teacher t1;
    t1.name = "sahil";

    cout << t1.name;

    return 0;
}