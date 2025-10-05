#include <iostream>
using namespace std;
int main() {
    string s = "sahas";
    int l=0,r=s.length()-1;
    while(l<=r){
        if(tolower(s[l])!=tolower(s[r])){
            cout << "not palindrome";
            return 0;
        }
        l++;
        r--;
    }

    cout << "palindrome";
    return 0;
}