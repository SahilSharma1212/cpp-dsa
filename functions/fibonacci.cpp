#include <iostream>
using namespace std;

void fibo(int n){
    int p1 = 1, p2 = 0;
    
        cout << " 0 , 1, ";
    for(int i = 0; i <= n-2; i++){
        cout << p1+p2 << ", ";
        p1 = p1+p2;
        p2 = p1-p2;
    }
}

int main() {
    fibo(10);
    return 0;
}