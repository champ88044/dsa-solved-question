#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {

        // THIS IS RECURSIVE SOLUTION

        // TIME COMPLEXITY IS O(N)^3
        int fnd = s.find("abc");
        if (s.size() == 0)
            return true;
        if (fnd != string::npos)
        {
            string left = s.substr(0, fnd);
            string right = s.substr(fnd + 3, s.size());
            return isValid(left + right);
        }
        return false;

        // THIS IS OPTIMISE SOLUTION BY USING STACK

        // TIME COMPLEXITY IS O(N);
        // BUT SPACE COMPEXITY IS O(N)

        if (s[0] != 'a')
            return false;
        stack<char> st;
        for (char ch : s)
        {
            if (ch == 'a')
            {
                st.push(ch);
            }
            else if (ch == 'b')
            {
                if (!st.empty() && st.top() == 'a')
                {
                    st.push('b');
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if (!st.empty() && st.top() == 'b')
                {
                    st.pop();

                    if (!st.empty() && st.top() == 'a')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                    return false;
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};