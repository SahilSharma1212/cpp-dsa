#include <iostream>
#include <vector>
using namespace std;

void sortzerostoend(vector<int> arr){
    int pos = 0, n = arr.size();
    
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[pos++]);
        }
    }
}

int main() {
    vector<int> a = {};
    return 0;
}