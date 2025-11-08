#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateByKPos(vector<int> &arr, int k){
    // for rotating, we will use mod to calc remainder of the index
    int n = arr.size();
    // step 1 is to create new arr and do a[(i+k) % size] in the new arr
      vector<int> copyarr(n);

      for(int i = 0; i < n; i++ ){
        copyarr[(i+k)%n] = arr[i];
      }

      for(int i: copyarr){
        cout << i << " , ";

      }
    // i dont know how to do it in the same array
    
    // reverse full array
    reverse(arr.begin(),arr.end());

    // reverse til k elements
    reverse(arr.begin(), arr.begin()+k);

    // reverse rest of the array
    reverse(arr.begin()+k, arr.end());

    cout << endl << endl;

    for(int i: arr){
        cout << i << " , ";

      }

}

int main() {
    vector<int> a = {1,2,3,4,5,6,7,8,9};

    rotateByKPos(a, 3);
    return 0;
}