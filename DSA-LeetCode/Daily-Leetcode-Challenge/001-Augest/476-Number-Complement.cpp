#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Approach-1
    // T.C : O(log2(num))
    // S.C : O(1)
    int findComplement(int num)
    {
        int number_of_bits = (int)(log2(num)) + 1;

        for (int i = 0; i < number_of_bits; i++)
        {
            num = num ^ (1 << i); // Take Xor to flip
        }
        return num;
    }

    // Approach-1 (iterate digit by digit and create complement)
    // T.C : O(log2(num))
    // S.C : O(1)

    int findComplement(int num)
    {
        int i = 0, ans = 0;
        while (num)
        {
            // If the current bit is 0, set the corresponding bit in ans to 1
            if (!(num & 1))
                ans |= (1 << i);
            num >>= 1;
            i++;
        }
        return ans;
    }
};