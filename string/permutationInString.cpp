#include <iostream>
#include <cstring>
using namespace std;

bool checkInclusion(string s1, string s2)
{

    int s1a[26] = {0};

    // array of substring is done
    for (int i = 0; i < s1.length(); i++)
    {
        s1a[s1[i] - 'a']++;
    }

    // now we run loop to check
    for (int i = 0; i < s2.length() - s1.length(); i++)
    {
        int window[26] = {0};

        for (int j = 0; j < s1.length(); j++)
        {
            window[s2[i + j] - 'a']++;
        }

        // compare arrays properly
        if (memcmp(s1a, window, sizeof(s1a)) == 0)
            return true;
    }
    return false;
};

int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    bool result = checkInclusion(s1, s2);
    cout << result;
    return 0;
}