#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> foursum(vector<int> &nums){

    sort(nums.begin(),nums.end());
    set<vector<int>> ansSet;

    for(int i = 0; i <= nums.size()-4; i++ ){

        if(i > 0 && nums[i] == nums[i-1]) continue;

        for(int j = i+1; j <= nums.size()-3;){
            

            int tar = 0 - nums[i] -nums[j];
            int st = j+1, end = nums.size()-1;

            while(st < end){
                if(nums[st] + nums[end] == tar){
                    ansSet.insert({nums[i],nums[j],nums[st++],nums[end--]});
                }else if(nums[st]+nums[end] < tar)st++;
                else end--;
            }
            j++;
            while (nums[j] == nums[j-1])
            {
                j++;
            }
            

        }
    }

    vector<vector<int>> vecAns(ansSet.begin(), ansSet.end());
    return vecAns;
}


int main() {
    vector<int> a = {-2,-1,-1,1,1,2,2};

    vector<vector<int>> res = foursum(a);

    for(auto &arr: res){
        cout << "{ ";
        for(int e: arr){
            cout << e << " , " ;
        }
        cout << " }" << endl;
    }
    return 0;
}