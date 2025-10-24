#include <iostream>
#include <vector>
using namespace std;
// in quick sort, there is pivot element, usually th last element

void quickSort(vector<int> &arr, int st, int end){
    // backtrack
    if(st >= end) return;

    // recusrion
    int pivot = arr[end];
    int l = st, r = end - 1;

    // partition
    while(l <= r){
        if (arr[l] < pivot) {
            l++;
        } else if (arr[r] > pivot) {
            r--;
        } else {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }

    swap(arr[l], arr[end]); 

    quickSort(arr, st, l-1);
    quickSort(arr, l+1, end);
    return ;
}
int main() {
    vector<int> arr = {12,43,468,9798,53,6};
    quickSort(arr, 0 , arr.size()-1);

    for(int val: arr){
        cout << val << " , ";
    }

    
    return 0;
}