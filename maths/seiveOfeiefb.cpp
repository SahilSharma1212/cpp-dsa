#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "enter number : ";
    cin >> n;
    vector<bool> a(n+1,true);

    for(int p = 2; p*p <= n; p++){
        if(a[p]){
            for(int i = p; p*i <= n; i++){
                a[p*i] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++){
        if(a[i]) cout << i << " , ";
    }
    return 0;
}