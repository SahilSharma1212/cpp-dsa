#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    // use maps to count frequency

    unordered_map<int,int> mp;

    int arr[] = {12,2,3,4,5,6,6,7,8,9,9};
    int n = (sizeof(arr)/sizeof(arr[0]));

    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }

    for(int i =0 ; i < n; i++){
        if(mp[arr[i]] == 1){
            cout<< arr[i] << " , ";
        }
    }
    
    return 0;
}