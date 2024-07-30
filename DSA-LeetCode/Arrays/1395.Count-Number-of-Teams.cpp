#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numTeams(vector<int> &rating)
    {
        int n = rating.size();
        int team = 0;
        for (int j = 1; j < n - 1; j++)
        {
            int countsmallleft = 0;
            int countlargerright = 0;
            int countlargerleft = 0;
            int countsmallright = 0;
            for (int i = 0; i < j; i++)
            {
                if (rating[i] < rating[j])
                {
                    countsmallleft++;
                }
                else if (rating[i] > rating[j])
                {
                    countlargerleft++;
                }
            }
            for (int k = j + 1; k < n; k++)
            {
                if (rating[j] < rating[k])
                {
                    countlargerright++;
                }
                else if (rating[j] > rating[k])
                {
                    countsmallright++;
                }
            }
            team += (countsmallleft * countlargerright) + (countlargerleft * countsmallright);
        }
        return team;
    }
};