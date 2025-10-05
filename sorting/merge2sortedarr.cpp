#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a1 = {1,2,3,0,0,0}, a2 = {2,5,6};
    
    int m = 3, n = 3;

    for(int sz = (m+n-1); sz >= 0; sz --){

        if(n == 0) break;
        if(m == 0){
            a1[sz] = a2[n-1];
            n--;
        }else{
            if(a1[m-1]>a2[n-1]){
                a1[sz] = a1[m-1];
                m--;
            }else{
                a1[sz] = a2[n-1];
                n--;
            }
        }
    }


    for(int v: a1){
        cout << v<< ",";
    }

    return 0;
}