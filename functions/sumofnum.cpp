#include <iostream>
using namespace std;

int sumOfNums(int n){
    int s =0;
    for(int i = 0; i <= n; i++){
        s+=i;
    }
    return s;
}

int factorial(int n){
    int f=1;
    for(int i = 1; i <= n; i++){
        f*=i;
    }
    return f;
}

int main() {

    cout << "Enter number - " << endl;
    int n;
    cin>>n;

    int sum = sumOfNums(n);
    cout << "sum is - "<< sum ;

    int fact = factorial(n);
    cout << "fact is - "<< fact ;
    
    return 0;
}