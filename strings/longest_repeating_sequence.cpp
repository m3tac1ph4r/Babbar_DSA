#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    string str = "axxxy";
    int n = str.length();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
                continue;
            }
            if(str[i-1]==str[j-1] and i!=j)
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
    cout<<dp[n][n];
    return 0;
}

/*
https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#

Same as Longest Common Subsequence but the only difference is that if s1[i-1]==s2[j-1] then i should not be equal to j
i.e i!=j then only dp[i][j]=1+dp[i-1][j-1];

*/