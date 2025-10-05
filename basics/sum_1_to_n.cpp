#include <iostream>
using namespace std;
int main() {
    int sum=0,n;
    cout << "enter number " << endl;
    cin >> n;
    for(int i=0; i<=n;i++){
        sum+=i;
    };
    cout << "sum is : " << sum << endl;
    return 0;
}