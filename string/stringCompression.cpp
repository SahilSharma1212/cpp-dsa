#include <iostream>
#include <vector>
using namespace std;

vector<char> compressString(vector<char> &chars)
{
    int i =1;
    vector<char> v;

    v.push_back(chars[0]);

    while(i<chars.size()){


        if(chars[i]==chars[i-1]){
            int count = 1;
            while(chars[i]==chars[i-1] && i < chars.size()){
                count++;
                i++;
            }

            string cs = to_string(count);
            for(char c: cs){
                v.push_back(c);
            }

        }else{
            v.push_back(chars[i]);
            i++;
        }
    }

    return v;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    vector<char> res = compressString(chars);
    for (char v : res)
    {
        cout << v << " , ";
    }
    return 0;
}