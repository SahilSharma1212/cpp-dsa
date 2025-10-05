#include <iostream>
#include <vector>
using namespace std;
int main() {
    int maxSum=INT16_MIN;
    vector<int> nums = {1,2,-3,4,5,6};
    int currsum=0;
    for (int i = 0; i < nums.size(); i++){
        currsum += nums[i];

        if(currsum>maxSum){
            maxSum=currsum;
        }

        if (currsum<0)
        {
            currsum=0;
        }
        
    }

    cout<<maxSum;
    return 0;
}