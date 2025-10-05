#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a = {1,3,4,4,4,4,3};
    int me = a[0];
    int count = 1;

    for(int i = 1; i<a.size();i++){
        if(a[i]==me){
            count++;
        }
        else{
            count--;
        }

        if(count == 0 ){
            count++;
            me=a[i];
        }

    }

    cout<<"ME is - "<<me<<" count is - "<<count;
    return 0;
}