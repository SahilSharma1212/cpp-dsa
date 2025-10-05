// every elemnts appear twice except for 1

// can be calculated by XOR
// can be calculated by unordered map


#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {11,1,3,44,44,3,1};
    int XOR=0;
    for(int val : v){
        XOR ^= val;
    }
    cout<<XOR;
    return 0;
}