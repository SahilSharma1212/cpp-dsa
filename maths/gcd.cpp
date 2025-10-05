#include <iostream>
using namespace std;

int gcdRecursion(int a, int b){
    if(a==0 || b==0){
        cout << "GCD is : " << a+b << endl;
        return 0;
    }
    else gcdRecursion(b,a%b);
    return 0;
}

int main() {

    int a,b;
    cout << "Enter A; " << endl;
    cin >> a;
    cout << "Enter B; " << endl;
    cin >> b;

    gcdRecursion(max(a,b),min(a,b));


    // gcd by loop
    while(a!=0 && b!=0){
        a=max(a,b)%min(a,b);
        b=min(a,b);
    }

    if(a+b == 0){
        cout << "LCM by loop is : 1";
        return 0;
    }

    cout << "LCM by loop is : " << a+b;
    

    return 0;
}