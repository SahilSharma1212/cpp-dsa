#include <iostream>
#include <vector>
using namespace std;

void maxsubarrsum(vector<int> &arr){
    int currsum = 0;
    int maxsum = INT64_MIN;
    int n = arr.size();
    for(int i = 1; i < n; i++){
        currsum += arr[i];
        maxsum = max(currsum, maxsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
}

int main() {
    vector<int> a = {};
    return 0;
}