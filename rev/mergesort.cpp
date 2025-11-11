#include <iostream>
#include <vector>
using namespace std;


// vector<int> mergerSort(vector<int> &arr, int left, int right){

//     if(left == right) return {arr[left]};
//     int mid = left + (right - left)/2;
    
//     vector<int> leftarr = mergerSort(arr, left, mid);
//     vector<int> rightarr = mergerSort(arr, mid+1, right); 

//     // merge 2 sorted arrays

//     int n = leftarr.size(), m = rightarr.size(), i = 0, j = 0;

//     vector<int> mergedArr ;

//     while(i < n && j < m){
//         if(leftarr[i] < rightarr[j]){
//             mergedArr.push_back(leftarr[i]);
//             i++;
//         }
//         else{
//             mergedArr.push_back(rightarr[j]);
//             j++;
//         }
//     }

//     while(i < n){
//         mergedArr.push_back(leftarr[i]);
//         i++;
//     }
//     while(j < m){
//         mergedArr.push_back(rightarr[j]);
//         j++;
//     }


//     return mergedArr;


// }


// better method

void merge(vector<int> &arr, int left, int mid, int right){
    int n = mid - left +1;
    int m = right - mid;

    vector<int> larr(n), rarr(m);

    for(int i = 0; i < n; i++) larr[i] = arr[i + left];
    for(int i = 0; i < m; i++) rarr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while(i < n && j < m){
        
        if(larr[i] <= rarr[j]){
            arr[k++] = larr[i++];
        }else{
            arr[k++] = rarr[j++];
        }
    }

    while(i<n){
        arr[k++] = larr[i++];
    }
    while(j<m){
        arr[k++] = rarr[j++];
    }
}

void mergerSort(vector<int> &arr, int left, int right){

    if(left >= right) return;
    int mid = left + (right-left)/2;

    mergerSort(arr, left, mid);
    mergerSort(arr, mid+1, right);

    merge(arr, left, mid, right);
}

int main() {
    vector<int> a = {3,6,21,54,43,67,9};

    mergerSort(a, 0, a.size()-1);

    for(int i: a){
        cout << i << " , ";
    }
    return 0;
}