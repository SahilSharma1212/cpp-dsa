// vectors is part of stl data structures

// vectors are dynamically allocated arrays

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2 = {1,2,3,4,5,6};
    vector<int> v3(3,0); //size of vector, value at each index

    for(auto i : v2){
        cout << i << " , ";
    }

    // functions

    cout<<v3.size();
    v3.push_back(4);
    for(auto i : v3){
        cout << i << " , ";
    }
    cout<< v2.front();
    cout<< v2.back();
    // cout<< v2.begin();
    // cout<< v2.end();
    cout<< v2.at(4);


    // .push_back()
    // .pop_back()
    // .front() --> first value
    // .back() --> last value
    vector<char> chs = {'a','b','c'};

    chs.insert(chs.begin()+1,'x');
    for(char val : chs){
        cout << val << " , ";
    }
    return 0;
}