#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {8, 10,4,6,9,0,43};

    for (int a : v2)
    {
        cout << a << " , ";
    }

    cout << endl;

    v2.erase(v2.begin()+2 , v2.end());

    for (int a : v2)
    {
        cout << a << " , ";
    }
    return 0;
}