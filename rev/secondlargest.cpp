#include <iostream>
#include <vector>
using namespace std;

int secondLargestNumber(vector<int> &arr){

    if (arr.size() < 2) {
        cout << "Not enough elements";
        return -1;
    }

    int lar = INT16_MIN;
    int sec = INT16_MIN;

    for(int a: arr){
        if(a > sec && a < lar){
            sec = a;
        }
        if(a > lar){
            sec = lar;
            lar = a;
        }
    }

    if (sec == INT16_MIN) {
        cout << "Not enough elements";
        return -1;
    }

    cout << sec;
    return sec;
}

int main() {
    vector<int> a = {3,4,6,7,88,12312,5,74};
    secondLargestNumber(a);
    return 0;
}