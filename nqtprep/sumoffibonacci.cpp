#include <iostream>
using namespace std;

void sumofFibonaci(int n){
    if(n == 0){
        cout << 0 ;
        return;
    }
    if(n == 1){
        cout << 1;
        return;
    }

    int a = 0;
    int b = 1;
    int sum = 1;
    for(int i = 2; i <= n; i++){
        int nt = a+b;
        sum += nt;
        a = b;
        b = nt;
    }

    cout << sum;
}

int main() {
    sumofFibonaci(7);
    return 0;
}