#include <iostream>
#include <vector>
using namespace std;

void rainwatervol(vector<int> &h){
    int s = 0, e = h.size()-1;

    int maxvol = 0;

    while (e > s){
        int vol = min(h[s],h[e])*(e-s);
        maxvol = max(maxvol, vol);

        if(h[e] > h[s]) s++;
        else e--;
    }

    cout << maxvol;
}

int main() {
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};


    rainwatervol(a);
    return 0;
}