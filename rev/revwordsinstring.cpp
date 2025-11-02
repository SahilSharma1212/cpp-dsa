#include <iostream>
#include <algorithm>
using namespace std;

void reverseWordsInString(string s){
    int end = 0, start = 0;
    int n =  s.size();

   while(end != n && start != n){
    if(s[end] == ' ' && s[start] == ' '){
        start++;
        end++;
    }
    if(s[start] != ' ' && s[end] != ' '){
        end++;
    }

    if(s[start] != ' ' && s[end] == ' '){
        reverse(s.begin() + start, s.begin() + end );
        start = end;

    }
    if(s[start] != ' ' && end == n){
        reverse(s.begin()+start, s.end());
        break;
    }
   };

    cout << s;

};

int main() {
    reverseWordsInString("hi i am sahil");
    return 0;
}