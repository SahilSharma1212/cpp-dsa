#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {0, 3, 8, 9, 7, 2};
    int st = 1, end = arr.size() - 2, mid = 0;
    int peak=0;
    while (st <= end)
    {
        mid = st + (end - st) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            peak = arr[mid];
            break;
        }
        else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            st = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

    cout << peak;
    return 0;
}