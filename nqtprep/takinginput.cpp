#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string token;

    getline(ss,token, ',');
    int a = stoi(token);
    getline(ss,token, ',');
    float b = stof(token);
    getline(ss,token, ',');
    char ch = token[0];

    cout << "number = " << a << endl << "float = " << b << endl << "charachter = " << ch;
    return 0;
}