#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        chars.push_back('\0');
        int count = 0;
        string ans;
        char temp;
        for (int i = 0; i < chars.size() - 1; i++)
        {
            temp = chars[i];
            int count = 1;
            while (chars[i + 1] == temp)
            {
                count++;
                i++;
            }
            ans += temp;
            if (count > 1)
            {
                ans = ans + to_string(count);
            }
        }
        chars.clear();
        for (auto it : ans)
        {
            chars.push_back(it);
        }
        return chars.size();
    }
};

// https://leetcode.com/problems/string-compression/?envType=study-plan-v2&envId=leetcode-75
// TIME COMPLEXITY IS 0(N)