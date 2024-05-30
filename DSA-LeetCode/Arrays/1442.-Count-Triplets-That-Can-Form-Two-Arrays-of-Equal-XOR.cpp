#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size(),cnt=0;
    for(int i=0;i<n;i++){
        int h=arr[i];
        for(int k=i+1;k<n;k++){
            h^=arr[k];
            if(h==0){
                cnt+=k-i;
            }
        }
    }
    return cnt;    
    }
};