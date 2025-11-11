#include <iostream>
#include <vector>
using namespace std;

void maxprodarr(vector<int> &arr){
    int n = arr.size();
    int maxend = arr[0], minend = arr[0];
    int currmax;

    for(int i = 1; i < n; i++){
        if(arr[i] < 0){
            swap(maxend,minend);

        }
        minend = min(arr[i], arr[i]*minend);
        maxend = max(arr[i], arr[i]*maxend);

        currmax = max(currmax, maxend);
    }

    cout << currmax;
}

int main() {
    vector<int> a = {};
    return 0;
}