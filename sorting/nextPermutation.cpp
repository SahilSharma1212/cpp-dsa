#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &a, int n){
    int prev=n-1;

    // Step 1: find pivot
    while(prev > 0 && a[prev - 1] >= a[prev]){
        prev--;
    }

    if(prev == 0){
        // array is descending → reverse entire array
        reverse(a.begin(), a.end());
    } else {
        int pivot = prev - 1;

        // Step 2: find smallest number greater than pivot in suffix
        int i = n - 1;
        while(a[i] <= a[pivot]){
            i--;
        }

        swap(a[pivot], a[i]);

        // Step 3: reverse the suffix from pivot+1
        reverse(a.begin() + prev, a.end());
    }

    for(int v : a){
        cout << v << " , ";
    }
}

int main() {
    vector<int> a = {1,3,4,2,5};
    int n = a.size();

    nextPermutation(a,n);
    return 0;
}