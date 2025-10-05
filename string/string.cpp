#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    char a[] = "sahil";
    cout<< "size of - " << a << " is - " << strlen(a) << endl;
    cout<< a[55];

    string str = "this is string";
    // dynamic in nature
    // internally resizable
    int l=0,r=str.length()-1;
    while(l<=r){
        swap(str[l],str[r]);
        l++; r--;
    }

    cout << "reversed str is - " << str;
    
    return 0;
}