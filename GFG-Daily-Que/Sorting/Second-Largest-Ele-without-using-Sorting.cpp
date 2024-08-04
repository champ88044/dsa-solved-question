#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr)
    {

        int l = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > l)
            {
                l = arr[i];
            }
        }
        int s = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > s && arr[i] != l)
            {
                s = arr[i];
            }
        }
        return s;
    }
};