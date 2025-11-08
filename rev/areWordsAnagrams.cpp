#include <iostream>
#include <algorithm>
using namespace std;

void areWordAnagrams(string s1, string s2){
    sort(s1.begin(), s1.end());

    sort(s2.begin(), s2.end());

    if(s1 == s2){
        cout << "anagram ";
        return;
    } 

    cout << "not anagram" ;
    return;


    // or use array of size 26 to calculate frequency
}

int main() {
    string s1 = "listen", s2 = "silent";

    areWordAnagrams(s1,s2);
    return 0;
}