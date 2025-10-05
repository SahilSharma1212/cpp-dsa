#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int maxVol = 0, currVol = 0;

    int st = 0, end = height.size()-1;

    while (end>st)
    {
        int h = min(height[end],height[st]);

        currVol = h*(end-st);

        if(currVol>maxVol){
            maxVol=currVol;
        }

        if(height[end]<height[st]){
            end--;
        }else{
            st++;
        }
    }

    cout<<maxVol;
    

    return 0;
}