#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    vector<int> a = {0,0,1,2,2,1,0,2,1};

    int mid = 0, low = 0, high = a.size()-1;

    while(mid <= high){
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }else if(a[mid]==1){
            mid++;

        }else{
            swap(a[high],a[mid]);
            high--;
        }


    }

    for(int v:a){
        cout << v << " , ";
    }
    return 0;
}