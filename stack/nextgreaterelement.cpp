#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void nextGreaterElement(vector<int> arr){
    int n = arr.size();
    stack<int> s;
    for(int i = n-1; i >= 0; i--){

        while(!s.empty() && s.top() <= arr[i]){
            s.pop();
        }

        if(s.empty()){
            s.push(arr[i]);
            arr[i] = -1;
        }else{
            int temp = arr[i];
            arr[i] = s.top();
            s.push(temp);
        }
    }

    // print result
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << " ";
    }
    
}

int main() {
    cout << "Hello World" << endl;
    return 0;
}