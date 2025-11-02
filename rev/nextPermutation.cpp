#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &a){

    // finding pivot, ie the number which is smaller than the 
    int n = a.size();
    int curridx = a.size() - 2;
    while( curridx >= 0 && a[curridx] >= a[curridx+1] ) curridx--;
    curridx++;
    
    if (curridx >= 0) {
        // Step 2: find the next greater element than a[curridx] from the right side
        int j = n - 1;
        while (a[j] <= a[curridx]) j--;

        // Step 3: swap pivot (a[curridx]) and successor (a[j])
        swap(a[curridx], a[j]);
    }

    reverse(a.begin() + curridx + 1, a.end());
}


int main() {
    vector<int> a = {1,3,2,4};
    return 0;
}