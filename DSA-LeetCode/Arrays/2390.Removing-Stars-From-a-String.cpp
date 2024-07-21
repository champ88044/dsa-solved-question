#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string removeStars(string s)
    {

        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == '*')
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(ch);
            }
        }

        return ans;
    }
};