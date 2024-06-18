#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
    {
        /*
           Solve by Max Heap
        int n=difficulty.size();
        int m=worker.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++)
        {
          int prof=profit[i];
          int diff=difficulty[i];
          pq.push({prof,diff});
        }
        sort(begin(worker),end(worker), greater<int>());
        int i=0;
        int toatalprofit=0;
        while(i<m && !pq.empty())
        {
          if(pq.top().second>worker[i])
          {
              pq.pop();
          }
         else{
           toatalprofit +=pq.top().first;
          i++;
         }
        }
        return toatalprofit;

        */

        /*
        SOLUTION NO. 2
        //solve by binary search
       int n=difficulty.size();
      int m=worker.size();
      vector<pair<int,int>>p;
      for(int i=0;i<n;i++)
      {
        p.push_back({difficulty[i],profit[i]});
      }
      sort(p.begin(),p.end());
      //preprocessing to find max profit till index i
      for(int i=1;i<p.size();i++)
      {
        p[i].second=max(p[i].second,p[i-1].second);
      }
      int totalprofit=0;
      for(int i=0;i<m;i++)
      {
        int workerindex=worker[i];
        int s=0,e=n-1;
        int maxprofit=0;

        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(p[mid].first<=workerindex)
            {
                maxprofit=max(maxprofit,p[mid].second);
                s++;
            }
            else{
                e--;
            }
        }
        totalprofit +=maxprofit;
      }
      return totalprofit;
      */
        // SOLUTION NO 3
        // T.C O(nLOGn)
        int n = difficulty.size();
        int m = worker.size();
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            p.push_back({difficulty[i], profit[i]});
        }
        sort(p.begin(), p.end());
        sort(worker.begin(), worker.end());
        int maxprofit = 0;
        int j = 0;
        int totalprofit = 0;
        for (int i = 0; i < m; i++)
        {
            while (j < n && worker[i] >= p[j].first)
            {
                maxprofit = max(maxprofit, p[j].second);
                j++;
            }
            totalprofit += maxprofit;
        }
        return totalprofit;
    }
};