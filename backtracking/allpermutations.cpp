#include <iostream>
#include <vector>
using namespace std;

void allPermutations(vector<int> &arr, int i, vector<vector<int>> &ans)
{
    int n = arr.size();
    if (i < n)
    {
        ans.push_back(arr);
        return;
    }
    else
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i], arr[j]);
            allPermutations(arr, i + 1, ans);
            swap(arr[i], arr[j]); // backtrack
        }
    }
}

int main()
{
    vector<int> a = {1, 2, 3};
    vector<vector<int>> ans;

    allPermutations(a, 0, ans);

    for (auto &perm : ans) {
        for (auto &x : perm)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}