#include <iostream>
#include <vector>
using namespace std;

void negnumberbeforeposnumber(vector<int> &arr){

    int negnumindex = 0, posnumindex = arr.size()-1;

    while(negnumindex < posnumindex){
        if(arr[negnumindex] < 0) negnumindex++;
        if(arr[posnumindex] > 0) posnumindex--;

        if(arr[negnumindex] > 0 && arr[posnumindex] < 0){
            swap(arr[negnumindex++], arr[posnumindex--]);
        }
    }

    
}
int main() {
    vector<int> a = {};
    return 0;
}