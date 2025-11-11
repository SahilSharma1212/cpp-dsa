#include <iostream>
#include <vector>
using namespace std;

void uniqueorvalssubarr(vector<int> &arr){
    vector<int> ans;
    int n =arr.size();
    for(int i = 0; i < n; i++){
        ans.push_back(arr[i]);
        int currorr = arr[i];
        for(int j = i+1; j < n; j++){
            currorr |= arr[j];
            ans.push_back(currorr);
        }
    }

    for(int i: ans){
        cout << i << " , " ;
    }

}

int main() {
    vector<int> a = {1,1,2};
uniqueorvalssubarr(a);
    return 0;
}