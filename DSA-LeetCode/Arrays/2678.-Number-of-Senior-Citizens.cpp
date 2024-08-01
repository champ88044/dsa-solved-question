#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int n = details.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string s = details[i];
            string substring = (s.substr(11, 11));
            int sub = stoi(substring.substr(0, 2));
            if (sub > 60)
            {
                count++;
            }
        }
        return count;
    }
};

// Time complexity is 0(n);
// https://leetcode.com/problems/number-of-senior-citizens/?envType=daily-question&envId=2024-08-01