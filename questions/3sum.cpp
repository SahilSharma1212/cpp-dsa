#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threesum(vector<int> &nums){

    sort(nums.begin(),nums.end());
    set<vector<int>> ansSet;

    for(int i = 0; i <= nums.size()-3; i++){
        int tar = 0-nums[i];

        int st = i+1, end = nums.size()-1;

        while(st < end){
            if(nums[st]+nums[end] == tar){
                ansSet.insert({nums[i],nums[st++],nums[end--]});
            }else if(nums[st]+nums[end] > tar){
                end--;
            }else{
                st++;
            }
        }
    }

        // Convert set to vector
    vector<vector<int>> result(ansSet.begin(), ansSet.end());
    return result;


}

int main() {
    vector<int> a = {-1,0,1,-1,2,-4};

    vector<vector<int>> ans = threesum(a);

    for (auto &triplet : ans) {
        cout << "[ ";
        for (int x : triplet) cout << x << " ";
        cout << "]\n";
    }
    return 0;
}