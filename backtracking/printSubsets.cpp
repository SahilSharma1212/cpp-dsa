#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(int v: ans){
            cout << v << " , ";
        }
        cout << endl;
        return;
    }

    // including
    ans.push_back(arr[i]);
    printSubsets(arr,ans,i+1);

    //excluding and backtracking
    ans.pop_back();
    printSubsets(arr,ans,i+1);

}

int main() {
    vector<int> a = {1,2,3};
    vector<int> ans;
    printSubsets(a,ans,0);
    return 0;
}