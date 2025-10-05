#include <iostream>
using namespace std;

int main()
{

    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    // same array
    int i = 0;
    int li = (sizeof(arr1) / sizeof(arr1[0])) - 1;
    ;
    while (li >= i)
    {
        int temp;
        temp = arr1[i];
        arr1[i] = arr1[li];
        arr1[li] = temp;
        i++;
        li--;
    }

    for (int j = 0; j < (sizeof(arr1) / sizeof(arr1[0])); j++)
    {
        cout << arr1[j] << " ";
    }
    return 0;
}