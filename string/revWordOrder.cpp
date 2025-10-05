#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string revWordOrder(string s)
{

    string res = "";
    int i = s.length()-1;


    while( i >= 0){

        // skipping the spaces
        while( i >= 0 && s[i] == ' ') i--;
        
        
        // agar end pohooch gaye toh ek extra i add ho jata hai to removinge that and exiting

        if(i <0 ) break;


        int end = i;

        // finding start of the word
        while(s[i] != ' ') i--;

        string word = s.substr(i + 1, end - i);

        if(!s.empty()){
            res += " ";
        }

        res += word;
    }

    return res;
}
int main()
{
    string s = "   hello world  ";

    string res = revWordOrder(s);

    cout << res;
    return 0;
}