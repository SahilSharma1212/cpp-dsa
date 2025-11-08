#include <iostream>
#include <vector>
using namespace std;

void firstRepeatingCharacter(string s){
    int a[26] = {0} ;

    for(char ch: s){
        a[ch-'a']++;
    }

    for(char ch: s){
        if(a[ch-'a'] == 1){
            cout << "ans is : " << ch;
            return;
        } 
    }

    cout << -1;
}

int main() {
    firstRepeatingCharacter("aa");
    return 0;
}