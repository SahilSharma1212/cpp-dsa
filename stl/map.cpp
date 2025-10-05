#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string,int> a;

    a["one"] = 1;
    a["two"] = 2;

    for(auto v : a){
        cout << v.first << " , " << v.second << endl ;
    }
    return 0;
}