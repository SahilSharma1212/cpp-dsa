#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextpermut(vector<int> &arr){
    int n = arr.size();
    int pivotindex = n-2;
    while(pivotindex >= 0 && arr[pivotindex] >= arr[pivotindex+1]) pivotindex--;

    if(pivotindex < 0){
        reverse(arr.begin(), arr.end());
        for(int elt: arr){
            cout << elt << " , ";
        }
        return;
    }

    for(int i = n-1; i >= 0; i--){
        if(arr[i] > arr[pivotindex]){
            swap(arr[i], arr[pivotindex]);
            break;
        }
        
    }

    reverse(arr.begin() + pivotindex + 1, arr.end());
    

    for(int elt: arr){
        cout << elt << " , ";
    }
    
}

int main() {
    vector<int> a = {1, 2, 3};
    nextpermut(a);
    return 0;
}