#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string reverseWords(string s){

    int st = 0, end = 0;
        for(int i = end; i < s.length(); i++){
            if(s[st] == ' '){
                st = i;
                end = i;
            }else{
                if(s[i] == ' ' || i == s.length()-1){
                    reverse(s.begin() + st, s.begin() + end + 1);
                    st = i; end = i;
                }else{
                    end = i;
                }
            }
        } 
        return s;

}
int main() {
    string s = "   hello world";
    string res = reverseWords(s);
    cout << res ;
    return 0;
}