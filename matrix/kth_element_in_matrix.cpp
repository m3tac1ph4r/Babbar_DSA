#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int mat[4][4]={{16, 28, 60, 64},{22, 41, 63, 91},{27, 50, 87, 93},{36, 78, 87, 94}}; 
    int n=4,k=3;
    int startval=mat[0][0];
    int endval=mat[n-1][n-1];
    int midval;
    while(startval<=endval)
    {
        midval=(startval+endval)/2;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int lo=0,high=n-1;
            while(lo<=high)
            {
                int m=lo+(high-lo)/2;
                if(mat[i][m]<=midval)
                    lo=m+1;
                else
                    high=m-1;
            }
        ans=ans+lo;
        }
        if(ans<k)
            startval=midval+1;
        else
            endval=midval-1;
    }
    cout<<startval;
    return 0;
}

/*

Algorithm used : Binary Search

IF we have to find mid value in range like 10 to 2000 then formula used :
midvalue=(startvalue+endvalue)/2   i,e (10+2000)/2

But if we have to mid value of index like 0-3 then the formula is
m=low+(high-low)/2  i.e 0+(3-0)/2

https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1

Given a N x N matrix, where every row and column is sorted in non-decreasing order. 
Find the kth smallest element in the matrix.

Example 1:
Input:
N = 4
mat[][] =     {{16, 28, 60, 64},
                   {22, 41, 63, 91},
                   {27, 50, 87, 93},
                   {36, 78, 87, 94 }}
K = 3
Output: 27
Explanation: 27 is the 3rd smallest element.

*/