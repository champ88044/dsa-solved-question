#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double averageWaitingTime(vector<vector<int>> &customers)
    {
        double totalwaittime = 0;
        int currtime = 0;
        int n = customers.size();
        for (auto &vec : customers)
        {
            int arrtime = vec[0];
            int cooktime = vec[1];
            if (currtime < arrtime)
            {
                currtime = arrtime;
            }
            int waittime = currtime + cooktime - arrtime;
            totalwaittime += waittime;
            currtime += cooktime;
        }
        return totalwaittime / n;
    }
};