#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllocPages)
{
    int stu = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllocPages) return false;

        if (pages + arr[i] <= maxAllocPages)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    return stu <= m;
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    if (m > n) return -1;

    int maxSum = 0;
    for (int v : arr) maxSum += v;

    int ans = -1;
    int st = 0, end = maxSum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1; // try smaller max pages
        }
        else
        {
            st = mid + 1; // need more pages
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    cout << allocateBooks(arr, 4, 2);
    return 0;
}
