#include <iostream>
#include <vector>
using namespace std;

void altposnegnum(vector<int> &arr){
    int n = arr.size();
    

    int posindex = 0, negindex = 1;
    
    while(posindex < n && negindex < n){
        if(arr[posindex] > 0) posindex = posindex+2;
        else if(arr[negindex] < 0) negindex = negindex+2;
        else{
            swap(arr[posindex], arr[negindex]);
            posindex= posindex+2;
            negindex = negindex+2;
        };
    }
    
}

int main() {
    vector<int> a = {};
    return 0;
}