#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int count = 0;
        int i = 0, j = 0;
        while (i < s.length() && j < t.length())
        {
            if (s[i] == t[j])
            {
                i++;
                count++;
            }
            j++;
        }
        cout << count << endl;
        cout << s.size();
        if (count == s.size())
            return true;
        else
            return false;
    }
};