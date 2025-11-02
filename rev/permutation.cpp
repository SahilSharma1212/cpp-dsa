#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


bool stringPermut(string &s, string part){
    int n = s.size();
    vector<int> ans(26,0);
    vector<int> window(26,0);
    for(char a: part){
        ans[a-'a']++;
    }
    for(int i = 0; i < part.size(); i++){
        window[s[i]-'a']++;
    }

    if(ans == window) return true;

    for(int i = part.size(); i < n; i++){
        window[s[i - part.size()]]--;
        window[s[i]]++;

        if(window == ans) return true;
    }

    return false;

}

int main() {
    cout << "Hello World" << endl;

    string part = "abc";
    string s = "sahbachil";
    bool ans = stringPermut(s,part);
    cout << ans;

    return 0;
}