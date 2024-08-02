#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> temp(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            temp[i] = nums[i % n];
        }
        int totalone = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                totalone++;
        }

        int i = 0;
        int j = 0;
        int currone = 0;
        int maxcount = 0;
        while (j < 2 * n)
        {
            if (temp[j] == 1)
            {
                currone++;
            }
            if (j - i + 1 > totalone)
            {
                currone -= temp[i];
                i++;
            }
            maxcount = max(maxcount, currone);
            j++;
        }
        return totalone - maxcount;
    }
};

// This solution Space complexity is 0(1);
class Solution
{
public:
    int minSwaps(vector<int> &nums)
    {
        int n = nums.size();
        // vector<int>temp(2*n);
        // for(int i=0;i<2*n;i++)
        // {
        //      temp[i]=nums[i%n];
        // }
        int totalone = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                totalone++;
        }

        int i = 0;
        int j = 0;
        int currone = 0;
        int maxcount = 0;
        while (j < 2 * n)
        {
            if (nums[j % n] == 1)
            {
                currone++;
            }
            if (j - i + 1 > totalone)
            {
                currone -= nums[i % n];
                i++;
            }
            maxcount = max(maxcount, currone);
            j++;
        }
        return totalone - maxcount;
    }
};
