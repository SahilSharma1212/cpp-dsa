#include <iostream>
using namespace std;
int main() {

    // for numbers
    for(int i = 1; i <= 4 ; i++){
        for(int j = 1; j <= 4; j++){
            cout<<j;
        }
        cout<<endl;
    }

    for(char i = 'a'; i <= 'd' ; i++){
        for(char j = 'a'; j <= 'd'; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}