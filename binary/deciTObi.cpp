#include <iostream>
#include <algorithm>
using namespace std;

string deciToBinary(int n){
    int rem, bin=0,power=1;
    string bN = "";

    while (n != 0){
        rem = n%2;
        bN += to_string(rem);
        // or
        bin = rem*power+bin;
        power*=10;
        n/=2;
    }

    reverse(bN.begin(),bN.end());
    return bN;
}

int deciToBinaryInt(int n){
    int rem, bin=0,power=1;

    while (n != 0){
        rem = n%2;
        // or
        bin = rem*power+bin;
        power*=10;
        n/=2;
    }

    return bin;
}

int main() {
    int n;
    cout <<"enter number : "<< endl;
    cin>>n;
    string bin = deciToBinary(n);

    
    int binInt = deciToBinaryInt(n);



    cout << "binary form is : " << bin << endl;
    cout << "binary form in Int : " << binInt ;
   
    return 0;

}