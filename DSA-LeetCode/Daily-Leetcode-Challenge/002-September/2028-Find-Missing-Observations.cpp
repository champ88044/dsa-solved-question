#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> missingRolls(vector<int> &rolls, int mean, int n)
    {
        // find the overall sum
        int sum = (rolls.size() + n) * mean;
        int rolSum = 0;

        for (int i = 0; i < rolls.size(); i++)
        {
            rolSum += rolls[i];
        }

        // subtract rolls-Sum to focus on missing observations
        sum -= rolSum;

        // check if the value can make the right dice values by comparing it to the maximum and minimum sums
        if (6 * n < sum || n > sum)
            return {};

        int temp = sum / n;
        // create an array with the dice average value
        vector<int> res(n, temp);

        sum -= temp * n;
        int i = 0;
        // distribute the remaining values if there are
        while (sum > 0)
        {
            sum--;
            res[i]++;
            i++;
            if (i >= n)
                i = 0;
        }
        return res;
    }
};