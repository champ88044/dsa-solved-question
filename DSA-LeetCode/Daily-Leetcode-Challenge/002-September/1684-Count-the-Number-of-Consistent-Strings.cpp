#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        vector<bool> isAllowed(26, false);
        for (char &ch : allowed)
        {
            isAllowed[ch - 'a'] = true;
        }

        int count = 0;
        for (string &word : words)
        {
            bool allChar = true;

            for (char &ch : word)
            {
                if (!isAllowed[ch - 'a'])
                {
                    allChar = false;
                    break;
                }
            }

            count += allChar;
        }

        return count;
    }
};