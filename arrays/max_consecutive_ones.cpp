#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    vector<int> v={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    int n=v.size();
    int i=0,ans=0,zerocount=0;
    for(int j=0;j<n;j++)
    {
        if(v[j]==0)
            zerocount++;
        while (zerocount>k)
        {
            if(v[i]==0)
                zerocount--;
            i++;
        }
    //zerocount<=k
    ans=max(ans,j-i+1);
    }
    cout<<ans;
    return 0;
}

/*
Sliding window technique
https://leetcode.com/problems/max-consecutive-ones-iii/
*/