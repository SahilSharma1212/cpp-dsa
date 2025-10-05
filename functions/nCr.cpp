#include <iostream>
using namespace std;

double factorial(double n){

    double f=1;
    for(double i = 1; i <=n ; i++){
        f*=i;
        
    }
    return f;
}

double ncr (double C, double r){

    return (factorial(C))/(factorial(r)*factorial(C-r));
}

int main() {
    double ncrOfNum = ncr(10.0,5.0);
    cout << ncrOfNum;
    return 0;
}