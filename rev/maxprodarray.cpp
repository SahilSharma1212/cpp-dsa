#include <iostream>
#include <vector>
using namespace std;

void maxProdSubarr(vector<int> arr){
    int maxend = arr[0], minend = arr[0], maxprod = arr[0];

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < 0){
            swap(maxend, minend);
        }
        maxend = max(arr[i], maxend*arr[i]);
        minend = min(arr[i], minend*arr[i]);

        maxprod = max(minend, maxend);
    };

    cout << maxprod;

}

int main() {
    vector<int> a = {};
    return 0;
}