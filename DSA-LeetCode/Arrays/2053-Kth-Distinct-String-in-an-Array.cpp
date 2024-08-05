#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        map<string, int> m;
        for (auto it : arr)
        {
            m[it]++;
        }
        int count = 0;
        for (auto it : arr)
        {
            if (m[it] == 1)
            {
                count++;
                if (count == k)
                {
                    return it;
                }
            }
        }
        return "";
    }
};