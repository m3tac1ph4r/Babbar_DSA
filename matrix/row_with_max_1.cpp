#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int n=2,m=2;
    vector<vector<int>> arr = { {0, 1, 1, 1},{0, 0, 1, 1},{1, 1, 1, 1},{0, 0, 0, 0} };
    int total = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int count_one = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
                count_one++;
        }
        if (count_one > total)
        {
            ans = i;
            total = count_one;
        }
    }
    cout<<ans;
    return 0;
}

/*

https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#

Given a boolean 2D array of n x m dimensions where each row is sorted. 
Find the 0-based index of the first row that has the maximum number of 1's.

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based indexing).

*/