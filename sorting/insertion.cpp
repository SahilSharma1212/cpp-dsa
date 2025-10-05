#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &a)
{

    for (int i = 1; i < a.size(); i++)
    {
        // recursively compare with prev until small found
        int curr = a[i];
        int prev = i - 1;

        // shift elements greater than curr to the right
        while (prev >= 0 && a[prev] > curr)
        {
            a[prev + 1] = a[prev];
            prev--;
        }

        a[prev + 1] = curr;
    }

    cout << " sorted array is - " << endl;

    for (int v : a)
        cout << v << " , ";
};

int main()
{
    vector<int> a = {4, 1, 5, 2, 3};
    insertionSort(a);
    return 0;
}