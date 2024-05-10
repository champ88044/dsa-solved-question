
//                    TIME COMPLEXITY ---O(N);






#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void  solvecombinationSum( vector<int>& candidates, int target,vector<int>&v,vector<vector<int>>&ans,int start)
{
    if(target==0)
    {
        ans.push_back(v);
        return;
    }
    if(target<0)
    {
        return;
    }
    for(int i=start;i<candidates.size();i++)
    {
        v.push_back(candidates[i]);
        solvecombinationSum(candidates,target-candidates[i],v,ans,i);
        v.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        solvecombinationSum(candidates,  target,v,ans,0);
        return ans;

    }
};