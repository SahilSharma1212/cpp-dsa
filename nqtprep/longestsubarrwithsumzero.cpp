#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void longestsubarrwithsumzero(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> prefmap;
    int maxlen = 0;
    int prefsum = 0;
    for (int i = 0; i < n; i++)
    {
        prefsum += arr[i];
        
        if (prefsum == 0)
        {
            maxlen = i + 1;
        }
        else if (prefmap.find(prefsum) != prefmap.end())
        {
            maxlen = max(maxlen, i - prefmap[prefsum]);
        }
        else
        {
            prefmap[prefsum] = i;
        }
    }

    cout << maxlen;
}

int main()
{
    vector<int> a = {15, -2, 2, -8, 1, 7, 10, 23};

    longestsubarrwithsumzero(a);
    return 0;
}