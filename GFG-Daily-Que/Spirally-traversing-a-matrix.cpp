#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // code here
        int n=matrix.size();
        vector<int>ans;
        int m=matrix[0].size();
        int startingrow=0;
        int endingcol=m-1;
        int endingrow=n-1;
        int startingcol=0;
        int total_mat=n*m;
        int count=0;
        while(count<total_mat)
        {
            for(int i= startingcol;i<=endingcol && count<total_mat;i++)
            {
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            
             for(int i= startingrow;i<=endingrow && count<total_mat;i++)
            {
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;
            
             for(int i= endingcol;i>=startingcol && count<total_mat;i--)
            {
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
            
             for(int i= endingrow;i>=startingrow && count<total_mat;i--)
            {
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
          startingcol++;
        }
        return ans;
    }
};