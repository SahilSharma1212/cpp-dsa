#include <iostream>
using namespace std;
int main() {
    int arr[10] = {1,2,3,5,6};

    for(int i = 0; i < sizeof(arr); i++)
    cout << arr[i] ;
    return 0;
}