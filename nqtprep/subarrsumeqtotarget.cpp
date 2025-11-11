#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void subarrsumequaltotarget(vector<int> &arr, int tar){

    int n = arr.size();
    int count=0;
    unordered_map<int, int> mp;
    mp.insert(0,0);
    int prefix =0;
    for(int i = 1; i < n; i++){
        prefix += arr[i-1];
        mp.insert(prefix, i);
    }
    int sum=0;

    for(int i = 0; i < n; i++){
        vector<int> temparr;
        sum+=arr[i];
        int remtofind = tar - sum;
        if(mp.find(remtofind) != mp.end()){
            int startIndex = min(mp[remtofind], mp[sum]);
            int endIndex = max(mp[remtofind], mp[sum]);
            while(startIndex <= endIndex){
                temparr.push_back(arr[startIndex]);
            }          
            count++;  
        }
    }
}

int main() {
    vector<int> a = {};
    return 0;
}