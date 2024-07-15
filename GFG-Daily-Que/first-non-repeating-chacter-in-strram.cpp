#include <bits/stdc++.h>
using namespace std;

class sootion
{

public:
    string FirstNonRepeating(string str)
    {
        // Code here
        string ans = "";
        int freq[26] = {0};
        queue<char> q;
        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            freq[ch - 'a']++;
            q.push(ch);
            while (!q.empty())
            {
                if (freq[q.front() - 'a'] > 1)
                {
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }

public:
    string FirstNonRepeating(string str)
    {
        // Code here
        string ans = "";
        int freq[26] = {0};
        queue<char> q;
        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            freq[ch - 'a']++;
            q.push(ch);
            while (!q.empty())
            {
                if (freq[q.front() - 'a'] > 1)
                {
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};