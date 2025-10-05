#include <iostream>
using namespace std;

string RemoveOccurence(string s, string part)
{
    int sIndex = 0, partIndex = 0;
    for (int i = 0; i < (int)s.length(); i++)
    {

        if(s[i] == part[partIndex]){
            partIndex++;
            if(partIndex == part.length()){
                s.erase(i-part.length()+1,part.length());
                partIndex=0;
            }
        }else{
            partIndex = 0;
        }

    }

    return s;
};

int main()
{
    string s = "daabcbaabcbc", part = "abc";
    cout << RemoveOccurence(s,part);
    return 0;
}