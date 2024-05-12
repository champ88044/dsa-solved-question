#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int value(char c)
{
     switch(c)
        {
            case 'M':
            return 1000;
            break;

             case 'D':
            return 500;
            break;

            case 'C':
            return 100;
            break;

             case 'L':
            return 50;
            break;

             case 'X':
            return 10;
            break;

             case 'V':
            return 5;
            break;

            case 'I':
            return 1;
            break;
            default :
            return -1;
        }
}
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
            {
                if(m[s[i]]<m[s[i+1]])
                {
                   sum-=m[s[i]];
                }
                else
                {
                    sum+=m[s[i]];
                }
            }
            return (sum);
    }
};