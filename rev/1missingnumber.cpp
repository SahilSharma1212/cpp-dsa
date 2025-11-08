#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int> &arr, int N) {
    int xor1toN = 0;
    int xorArr = 0;

    for (int i = 1; i <= N; i++)
        xor1toN ^= i;

    for (int num : arr)
        xorArr ^= num;

    int missing = xor1toN ^ xorArr;
    cout << missing;
    return missing;
}

int main() {
    vector<int> a = {};
    return 0;
}