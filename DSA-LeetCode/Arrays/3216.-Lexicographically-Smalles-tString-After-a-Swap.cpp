#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string getSmallestString(string s)
    {
        int n = s.size() - 1;
        // int result=0;
        for (int i = 0; i < n; i++)
        {
            int a = (s[i]) - '0';
            int b = (s[i + 1]) - '0';
            if (a % 2 == b % 2 && a > b)
            {
                swap(s[i], s[i + 1]);
                break;
            }
        }
        return s;
    }
};