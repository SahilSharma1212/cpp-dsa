#include <iostream>
using namespace std;
int main() {
    for(int i = 4; i >= 1 ; i--){
        for(int j = 0; j < 4-i ; j++){
            cout << " ";
        }
        for(int j = 1; j<=i; j++){
            cout << 5-i;
        }
        cout << endl;
    }
    return 0;
}