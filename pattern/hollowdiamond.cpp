#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // upper half
    for (int i = 1; i <= n; i++) {
        
        // leading spaces
        for (int j = i; j < n; j++) cout << " ";

        // first star
        cout << "*";

        // inner spaces (only for i > 1)
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    // lower half
    for (int i = n - 1; i >= 1; i--) {
        // leading spaces
        for (int j = i; j < n; j++) cout << " ";

        // first star
        cout << "*";

        // inner spaces (only for i > 1)
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
