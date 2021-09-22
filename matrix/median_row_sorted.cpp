#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    vector<vector<int>> matrix = {{ 1, 3, 5 },{2, 6, 9} ,{3, 6, 9}};
    int r=3,c=3;
    int n=r*c;
    int startval=0;
    int endval = 2000; //because we have given that maxvalue is 2000
    int midval;
    while (startval<=endval)
    {
        int ans=0;
        midval=(startval+endval)/2;
        for(int i=0;i<r;i++)
        {
            int lo=0,high=c-1;
            while(lo<=high)
            {
                int m=lo+(high-lo)/2;
                if(matrix[i][m]<=midval)
                    lo=m+1;
                else
                    high=m-1;
            }
            ans+=lo;
        }
        if(ans<=n/2)
            startval=midval+1;
        else
            endval=midval-1;
    }
    cout<<startval<<endl;
    return 0;
}

/*
https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1

Algorithm used : binary search

IF we have to find mid value in range like 10 to 2000 then formula used :
midvalue=(startvalue+endvalue)/2   i,e (10+2000)/2

But if we have to mid value of index like 0-3 then the formula is
m=low+(high-low)/2  i.e 0+(3-0)/2

Given a row wise sorted matrix of size RxC where R and C are always odd, 
find the median of the matrix.

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 

*/
