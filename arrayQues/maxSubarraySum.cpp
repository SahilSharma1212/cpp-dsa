#include <iostream>
#include <vector>
using namespace std;
int main() {
    int maxSum=INT16_MIN;
    vector<int> nums = {1,2,-3,4,5,6};

    for(int st = 0; st < nums.size(); st++){
        int currSum = 0;
        for(int end = st; end < nums.size(); end++){
            currSum+=nums[end];
            if(currSum>maxSum)maxSum=currSum;
        }
    }
    cout << maxSum;
    
    return 0;
}