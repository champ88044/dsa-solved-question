#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        // THIS CODE FIVES TLE
        // int n=nums.size();
        // int maxi=INT_MIN;
        // vector<int>ans;
        // for( int i=0;i<n;i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         maxi=max(maxi,sum);
        //     }
        // }

        // return maxi;

        // OPTISME SOLUTION BY KADANE ALGORITHM
        //  TIME COMPLXITY IS 0(N)
        //  SPACE IF 0(1);
        int sum = 0;
        int maxi = INT_MIN;
        for (auto it : nums)
        {
            sum += it;
            maxi = max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};