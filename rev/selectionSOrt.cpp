#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> &arr){
    int n = arr.size();
    //start loop from 1
    for(int i = 1; i < n; i++){
        int currnum = arr[i];
        int checkIdx = i-1;
        while(currnum > arr[checkIdx] && checkIdx >= 0){
            arr[checkIdx+1] = arr[checkIdx];
            checkIdx--;
        }
        arr[checkIdx+1] = currnum;
    }

    return arr;
}

int main() {
    vector<int> a = {2,5,1,33,543,3,65};
    vector<int> res = selectionSort(a);

    for(int num:res){
        cout << num << " , ";
    }
    return 0;
}