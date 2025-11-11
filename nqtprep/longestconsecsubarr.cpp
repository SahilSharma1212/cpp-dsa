#include <iostream>
#include <vector>
#include <set>
using namespace std;

void longestsubarraywithconsecutivenumbers(vector<int> &arr){
    int n = arr.size();
    int maxlen = 1;

    for(int i = 0; i < n; i++){
        int currlen = 1;
        int maxnum = arr[i];
        int minnum = arr[i];
        set<int> s;
        s.insert(arr[i]);

        for(int j = i+1; j < n; j++){

            if(s.find(arr[j]) != s.end()) break;

            s.insert(arr[j]);
            minnum = min(minnum, arr[j]);
            maxnum = max(maxnum, arr[j]);

            if(maxnum - minnum  ==  j - i){
                currlen = max(currlen,  j - i + 1);
            }

        }

        maxlen = max(currlen, maxlen);
        
    }

    cout << maxlen;
}

int main() {
    vector<int> a = {2, 0, 2, 1, 4, 3, 1, 0};
    longestsubarraywithconsecutivenumbers(a);
    return 0;
}