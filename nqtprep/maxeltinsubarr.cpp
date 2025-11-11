#include <iostream>
#include <vector>
using namespace std;

void maxeltsubarr(vector<int> &arr, int k){
    int n = arr.size();
    vector<int> maxarr;
    for(int i = 0; i < n-k+1; i++){

        int mx = arr[i];

        int j = 1;
        
        while(j<k && i+j < n){
            mx = max(mx, arr[i+j]);
            j++;
        }
        maxarr.push_back(mx);
        
    }

    for(int i: maxarr){
        cout << i << " , ";
    }
}

int main() {
    vector<int> a = {2,4,7,1,6,3};

    maxeltsubarr(a,3);
    return 0;
}