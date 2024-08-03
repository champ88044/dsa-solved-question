#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> m;
        int count = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
            if (m[nums[i]] > maxi)
                maxi = m[nums[i]];
        }
        for (auto it : m)
        {
            if (it.second == maxi)
                count += maxi;
        }
        return count;
    }
};