#include <iostream>
#include <vector>
using namespace std;

void leadersinarr(vector<int> &arr){
    int n = arr.size();
    vector<int> leaders;
    
    int currlead = arr[n-1];
    leaders.push_back(currlead);

    for(int i = n-2; i >= 0; i--){
        if(arr[i] > currlead){
            leaders.push_back(arr[i]);
            currlead = arr[i];
        }
    }

    for(int i : leaders){
        cout << i << " , ";
    }
    
}

int main() {
    vector<int> a = {16, 17, 4, 3, 5, 2};
    leadersinarr(a);
    return 0;
}