#include<bits/stdc++.h>
#include<sstream>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        //   //  tc O(n)
        //      int n=s.length();
        //     for(int i=0;i<n;i++)
        //     {
        //        if(s[i]!=' ')
        //        {
        //         int j=i;
        //         while(j<n&&s[j]!=' ')
        //         {
        //             j++;
        //         }
        //         reverse(begin(s)+i,begin(s)+j);
        //         i=j;
        //        }
        //     }
        //     return s;

        // approach 2
        stringstream ss(s);
        string token = "";
        string result = "";
        while (ss >> token)
        {
            reverse(begin(token), end(token));
            result += token + " ";
        }
        return result.substr(0, result.length() - 1);
    }
};