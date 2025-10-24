#include <iostream>
#include <vector>
#include <map>
using namespace std;

void twoSum(vector<int> & arr, int k){
    map<int,int> mp;
    int count = 0;

    for(int i = 0; i < arr.size(); i++ ){
        int leftsum = k - arr[i];
        if(!mp[leftsum]){
            mp[arr[i]]++;
        }else{
            count+=mp[leftsum];
        }
    }

    cout << count;
}

int main() {
    vector<int> a = {1,2,3,4,5,6,7,8};
    int k = 7;
    twoSum(a, k);
    return 0;
}