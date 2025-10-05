#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    int mid, st = 0, end = a.size() - 1;

    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (mid % 2 == 1)
            mid--;

        if (a[mid] != a[mid - 1] && a[mid] != a[mid + 1])
        {
            cout << "single number is - " << a[mid];
            break;
        }
        else if (a[mid] == a[mid - 1])
        {
            end = mid;
        }
        else
        {
            st = mid;
        }
    }
    return 0;
}