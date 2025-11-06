#include <iostream>
using namespace std;

bool checkpalindrome(string s){
    int l = 0, r = s.size()-1;
    while(l <= r){
        if(s[l] == s[r]){
            l++;
            r--;
        }else return false;
    }
    return true;
};

string longestPalindrome(string s) {
        int n = s.size();
        string longestsubstring = "";
        for(int i = 0; i < n; i++){
            string curr = "";
            for(int j = i; j < n; j++){
                    curr += s[j];
                    if(checkpalindrome(curr) && curr.size() > longestsubstring.size()){
                        longestsubstring = curr;
                    }
            };
        };

        return longestsubstring;
    }

int main() {
    string s = "abbaz";
    string ans = longestPalindrome(s);
    cout << ans;
    return 0;
}