#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0 ; i < n; i++){

        for(int j = 0; j < n-i; j++ ){
            if(arr[j] > arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int val : arr){
        cout << val << " , ";
    }
}

int main() {
    
    vector<int> arr = {3,4,2,55,8,6,9};

    bubbleSort(arr);


    return 0;
}