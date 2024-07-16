#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string printString(string s, char ch, int count)
    {
        // Your code goes here
        int c = 0;
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ch)
            {
                c++;
            }
            if (count == c && (i + 1) != s.length())
            {
                ans = s.substr(i + 1, s.length());
                break;
            }
        }
        return ans;
    }
};