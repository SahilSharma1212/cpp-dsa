#include <iostream>
#include <vector>
using namespace std;

int maxaltsubarr(vector<int> &arr){
    if(arr.size() == 0) return 0;
    if(arr.size() == 1) return arr[0];

    int prev2 = max(0, arr[0]);
    int prev1 = max(prev2, arr[1]);
    int n = arr.size();
    for(int i = 2; i < n; i++){
        int curr = max(prev1, prev2+arr[i]);

        prev2 = prev1; 
        prev1 = curr;
    }

    return prev1;
}

int main() {
    vector<int> a = {};
    return 0;
}