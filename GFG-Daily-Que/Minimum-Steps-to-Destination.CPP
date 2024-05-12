#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSteps(int d)
    {
        // code here
        int sum = 0;
        int step = 0;
        d = abs(d);
        while (sum < d || (sum - d) % 2 != 0)
        {

            step++;

            sum += step;
        }
        return step;
    }
};