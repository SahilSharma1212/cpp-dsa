#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
    
}

int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    cout << "Hello World" << endl;
    int n;
    cout << "enter number : " << endl;
    cin>>n;

    int ans = factorial(n);
    cout << ans << endl;
int f;
    cout << "enter number fibo : " << endl;
    cin>>f;
    int x = fibonacci(f);
    cout << x << endl;
    return 0;
}