#include <iostream>
using namespace std;

int rev(int x){
    int num= x, ldigit;
    int sum = 0;
    while(num!=0){
        //123
        ldigit = num%10;
        sum = sum*10 + ldigit;
        num = num/10;
    }
    
    return sum;
}

int sumofdigit(int x){
    int ldigit, sum;

    while (x!=0){
        ldigit = x%10;
        sum+=ldigit;
        x = x / 10; 
    }
    return sum;
}


int main() {
    int x = 1234;
    
    int REV = rev(x);
    cout <<"rev number is " << endl << REV << endl;

    int SOD = sumofdigit(x);

cout <<"sum of digit is " << endl << SOD << endl;
    return 0;
}