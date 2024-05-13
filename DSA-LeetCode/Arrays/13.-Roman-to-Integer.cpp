#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
class Solution
{
public:
    int romanToInt(string s)
    {
        int sum = 0;
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        for (int i = 0; i < s.length(); i++)
        {
            if (m[s[i]] < m[s[i + 1]])
=======
class Solution {
public:

    int romanToInt(string s) {
            int sum=0;
             unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
            for(int i=0;i<s.length();i++)
>>>>>>> 7c6a8ed26af4a51f14fcd0b50cc93e37a0100e74
            {
                sum -= m[s[i]];
            }
            else
            {
                sum += m[s[i]];
            }
        }
        return (sum);
    }
};
