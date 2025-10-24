#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> mergeSort(vector<int> &arr, int st, int end)
{
    // if size of array is 1, then return the array itself
    if (st == end) return {arr[st]};

    int mid = (st + end) / 2;
    vector<int> arr1 = mergeSort(arr, st, mid);
    vector<int> arr2 = mergeSort(arr, mid + 1, end);

    vector<int> merged;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
            merged.push_back(arr1[i++]);
        else
            merged.push_back(arr2[j++]);
    }

    while (i < arr1.size())
        merged.push_back(arr1[i++]);
    while (j < arr2.size())
        merged.push_back(arr2[j++]);

    return merged;
}



int main()
{
    vector<int> a = {12,34,45,5,63,13,5,466};

    vector<int> res = mergeSort(a,0,a.size()-1);
    for(int i: res){
        cout << i << " , ";
    }
    return 0;
}