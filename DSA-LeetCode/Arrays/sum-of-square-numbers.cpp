#include <bits/stdc++.h>
using namespace std;

// time com-O(n)
// space comp--O(1)
class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long i = 0, j = sqrt(c), pow;
        while (i <= j)
        {
            pow = (i * i) + (j * j);
            if (pow == c)
                return true;
            if (pow > c)
                j--;
            else
            {
                i++;
            }
        }
        return false;
    }
};