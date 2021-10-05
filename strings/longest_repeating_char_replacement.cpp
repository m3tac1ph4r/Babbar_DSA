#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    string s = "BAAA";
    int k=0;
    int n=s.length();
    int left=0,right=0,maxcount=0,ans=0;
    int ch[26]={0};
    for(right=0;right<n;right++)
    {
        ch[s[right]-'A']++;
        maxcount=max(maxcount,ch[s[right]-'A']);
        while(right-left +1-maxcount>k)
        {
            ch[left-'A']--;
            left++;
        }
        ans=max(ans,right-left+1);
    }
    cout<<ans<<endl;
    return 0;
}

/*
The above solution is solved using sliding window two pointer technique
https://leetcode.com/problems/longest-repeating-character-replacement/


solution 

https://aaronice.gitbook.io/lintcode/two_pointers/longest-repeating-character-replacement
*/