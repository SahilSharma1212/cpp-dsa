#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> missingValues(vector<vector<int>> &grid)
{
    map<int, int> hmp;
    vector<int> vec;
    for (auto &r : grid)
    {
        for (int v : r)
        {
            hmp[v]++;
            if (hmp[v] == 2)
            {
                vec.push_back(v);
            }
        }
    }

    for (int i = 1; i <= grid.size() * grid.size(); i++)
    {
        if (hmp[i] == 0)
        {
            vec.push_back(i);
        }
    }

    return vec;
}

vector<int> missingAndRepeatedValues(vector<vector<int>> &grid)
{

    int n = grid.size();
    int total = n * n;

    long long S = (long long)total * (total + 1) / 2;
    long long P = (long long)total * (total + 1) * (2 * total + 1) / 6;

    long long S_actual = 0, P_actual = 0;

    for (auto &row : grid)
    {
        for (int v : row)
        {
            S_actual += v;                // sum of elements
            P_actual += (long long)v * v; // sum of squares
        }
    }

    long long diff = S_actual - S;            // a - b
    long long sum_ab = (P_actual - P) / diff; // a + b

    int a = (diff + sum_ab) / 2;
    int b = a - diff;

    return {a, b};
}
int main()
{
    vector<vector<int>> a = {
        {1, 2, 3},
        {4, 5, 7},
        {9, 8, 9},
    };

    // vector<int> res = missingValues(a);

    vector<int> res = missingAndRepeatedValues(a);
    for (int v : res)
    {
        cout << v << " , ";
    }
    return 0;
}