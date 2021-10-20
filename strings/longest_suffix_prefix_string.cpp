#include<bits/stdc++.h>
using namespace std;
#define ll long long
int lps(string s)
{
    int n=s.length();
    vector<int> p(n,0);
    for(int i=1;i<n;i++)
    {
        int j=p[i-1];
        while(j>0 and s[i]!=s[j])
        {
            j=p[j-1];
        }
        if(s[i]==s[j])
            j++;
        p[i]=j;
    }
    return p[n-1];
}
int main()
{
    string s;
    cin>>s;
    cout<<lps(s)<<"\n";
    return 0;
}

/*
https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1#
*/