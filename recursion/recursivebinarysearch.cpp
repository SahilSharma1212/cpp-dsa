#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> &arr, int tar, int st, int end){
    if(st <= end){
        int mid = st+(end-st)/2;
        if(arr[mid] == tar){
            return mid;
        }else if(arr[mid] > tar){
            binarysearch(arr,tar,st,mid-1);
        }else{
            binarysearch(arr,tar,mid+1,end);
        }
    }
    else return -1;
    
}

int main() {
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    int tar,end = a.size()-1;
    cout << "enter target : "<< endl;
    cin >> tar;
    int idx = binarysearch(a,tar,0,end);
    if(idx == -1){
        cout << "Not found";
    }else{
        cout << "Element found in index : " << idx;
    }
    return 0;
}