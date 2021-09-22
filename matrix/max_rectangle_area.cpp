#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findmax(int arr[],int n)
{
    int res=0,i,h=0,pos=0;
    stack<int> height;
    stack<int> startpos;
    // startpos.push(0);
    for(i=0;i<n;i++)
    {
        // Empty or when a bigger value arrives we start a new rectangle
        if(height.empty() || arr[i]>height.top())
        {
            height.push(arr[i]);
            startpos.push(i);
        }
        // Pop logic
        else if(arr[i]<height.top())
        {
            while (!height.empty() and arr[i]<height.top())
            {
                h=height.top();
                pos=startpos.top();
                res=max(res,h*(i-pos));
                height.pop();
                startpos.pop();
            }
            height.push(arr[i]);
            // Store the last popped value to retrive the current value's starting
            startpos.push(pos);
        }
    }
    // Remaining values
    while (!height.empty())
    {
        h = height.top();
        pos = startpos.top();
        res = max(res, h * (i-pos));
        height.pop();
        startpos.pop();
    }
    
    return res;
}

int main()
{
    int M[4][4] = {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    // int M[2][5] = {{1, 1, 1, 1, 1}, {0,1,0,0,0}};
    int n=4,m=4,res=0;
    int arr[m]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(M[i][j]==0)
                arr[j]=0;
            else
                arr[j]+=M[i][j];
        }
        // Calculate result so far
        res=max(res,findmax(arr,m));
    }
    cout<<res;
    return 0;
}

/*

https://www.youtube.com/watch?v=KHskUj19ov4

https://practice.geeksforgeeks.org/problems/max-rectangle/1#

Given a binary matrix M of size n X m. 
Find the maximum area of a rectangle formed only of 1s in the given matrix.

Input:
n = 4, m = 4
M[][] = {{0 1 1 0},
         {1 1 1 1},
         {1 1 1 1},
         {1 1 0 0}}
Output: 8
Explanation: For the above test case the
matrix will look like
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
the max size rectangle is 
1 1 1 1
1 1 1 1
and area is 4 *2 = 8.

*/