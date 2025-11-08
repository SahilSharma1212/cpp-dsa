#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void countfreq(vector<int> arr){
    unordered_map<int,int> mp;

    for(int i: arr){
        mp[i]++;
    }
}

void palindrome(int a){
    int a2 = a;
    int ld=0,num=0;
    while(a!=0){
        ld = a%10;
        num= num*10 + ld;
        a /= 10;
    }
    if(a2 == num) cout << "palindrome";
    else cout << "not palindrome";
}


void sortZeros(vector<int> arr){
    // int nz=0, z=1;

    // while (nz < arr.size() || z < arr.size()){
    //     if(arr[nz] == 0) nz++;
    //     if(arr[z] != 0) z++;

    //     if(arr[nz] != 0 && arr[z] == 0){
    //         swap(arr[nz],arr[z]);
    //         nz = z;
    //         z++;
    //     }
    // }
    // for(int i: arr){
    //     cout << i << " , ";
    // }

    int n = arr.size();
    int pos = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

}

int main() {
    vector<int> a = {0,1,0,3,12};
sortZeros(a);
    palindrome(12345);
    return 0;
}