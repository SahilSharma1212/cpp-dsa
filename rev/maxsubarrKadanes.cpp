#include <iostream>
#include <vector>
using namespace std;

void kadanesalgo(vector<int> a){
    int currsum = 0, maxsum = INT64_MIN;
    int n = a.size();
    for(int i = 0; i < n ; i++ ){
        currsum += a[i];

        maxsum = max(currsum,maxsum);

        if(currsum < 0){
            currsum = 0;
        }
    }
}

int main() {
    vector<int> a = {};
    return 0;
}