#include <iostream>
#include <vector>

using namespace std;

void returnPowerSet(vector<int> &arr, vector<int> &ans, vector<vector<int>> &final, int i)
{
    if (i == arr.size())
    {
        vector<int> sub(ans.begin(), ans.end());
        final.push_back(sub);
        return;
    }

    // including
    ans.push_back(arr[i]);
    returnPowerSet(arr, ans, final, i + 1);

    // excluding and backtracking
    ans.pop_back();
    returnPowerSet(arr, ans, final, i + 1);
}

int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> ans;
    vector<vector<int>> final;
    returnPowerSet(a, ans, final , 0);

    for (auto row : final)
    {
        cout << "{ ";
        for (int i : row)
        {
            cout << i << " , ";
        }
        cout << " }" << endl;
    }
    return 0;
}