#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarrEqualToK(vector<int> &nums, int k){
    unordered_map<int,int> mp; // prefix sum -> frequency
        mp[0] = 1; // important: empty prefix
        
        int psum = 0, count = 0;
        
        for(int num : nums){
            psum += num;
            
            if(mp.find(psum - k) != mp.end()){
                count += mp[psum - k];
            }
            
            mp[psum]++;
        }
        
        return count;
    
}


int main() {
    vector<int> a = {9,4,20,3,10,5};
    int tar = 33;
    int r = subarrEqualToK(a,tar);
    cout << r;
    return 0;
}