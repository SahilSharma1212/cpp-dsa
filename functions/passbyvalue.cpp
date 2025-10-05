#include <iostream>
using namespace std;

void passbyvalue(int x, int y){
    //swap
    int temp;

    temp = x;
    x = y;
    y = temp;

    cout << "X and Y after swapping in function are : " << x << " , " << y << endl;
}

int main() {
    int x= 10, y=20;
    cout << "before swapping, x and y are - " << x << " , " << y << endl;
    passbyvalue(x,y);

cout << "after swapping, x and y are - " << x << " , " << y << endl;
    return 0;
}