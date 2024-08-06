#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumPushes(string word)
    {
        vector<int> a(26, 0);
        for (auto ch : word)
        {
            a[ch - 'a']++;
        }
        sort(begin(a), end(a), greater<int>());
        int result = 0;
        for (int i = 0; i < 26; i++)
        {
            int f = a[i];
            int press = i / 8 + 1;
            result += press * f;
        }
        return result;
    }
};