#include <iostream>
#include <cmath>
using namespace std;

int binToDeci(int n){
    int rem,power=0,deci=0;
    while(n!=0){
        rem = n%2;
        deci += pow(2*rem,power);
        power++;
        n/=10;
    }
    return deci;
}
int main() {
    int deci = binToDeci(1101);
    cout << "Hello World" << deci;
    return 0;
}