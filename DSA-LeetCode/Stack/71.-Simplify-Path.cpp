#include<bits/stdc++.h>
using namespace std;
#include<stack>
class Solution {
public:
 void build(stack<string>s,string ans)
 {
    if(s.empty())
    {
        return;

    }
    string minpath=s.top();
    s.pop();
    build(s,ans);
    ans+=minpath;
 }
   string simplifyPath(string path) {
        int i=0;
        stack<string>s;
        while(i<path.size())
        {
            int start=i;
             int end=i+1;
             while(end<path.size()&& path[end]!='/')
             {end++;}
             string minpath=path.substr(start,end-start);
             i=end;
             if(minpath=="/"||minpath=="/.")
             {continue;}
             if(minpath!="/..")
             {
                s.push(minpath);
             }
             else if(!s.empty())
             {
                s.pop();
                }
           
        }
          string ans=s.empty()?"/":"";
             build(s,ans);
             return ans;

   }
};