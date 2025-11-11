#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void longestsubseq(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int fincount = 1;
    int currcount = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1]) continue;

        if (arr[i] != arr[i - 1] + 1)
        {
            fincount = max(fincount, currcount);
            currcount = 1;
        }
        else
        {
            currcount++;
        }
    }

    fincount = max(fincount, currcount);
}


int main()
{
    vector<int> a = {};
    return 0;
}