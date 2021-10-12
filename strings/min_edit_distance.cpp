#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int i,int j,string s1,string s2,vector<vector<int>> &dp){
    if(i==s1.size())
        return s2.size()-j;
    if(j==s2.size())
        return s1.size()-i;
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(s1[i]==s2[j])
        return dp[i][j]=solve(i+1,j+1,s1,s2,dp);
    else
    {
        int left=1+solve(i,j+1,s1,s2,dp);   //insert
        int mid=1+solve(i+1,j,s1,s2,dp);    //remove
        int right=1+solve(i+1,j+1,s1,s2,dp);  //replace
        return dp[i][j]=min(left,min(mid,right));
    }
}
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int n=s.length();
    int m=t.length();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    cout<<solve(0,0,s,t,dp);
    return 0;
}
