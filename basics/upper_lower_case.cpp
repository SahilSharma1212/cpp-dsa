#include <iostream>
using namespace std;
int main() {
    char ch;

    cout << "Enter char" << endl;

    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"lower case";
    }else if(ch >= 'A' && ch <= 'Z'){
        cout<<"upper case";

    }else{
        cout<<"invaliad char";
    }
    return 0;
}