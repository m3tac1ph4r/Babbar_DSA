#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    string s = "aaacb";
    int length=s.length();
    int c=0,maxc=0;
    for (int i = 0; i < length; i++)
    {
        int j=i+1;
        int k=i+2;
        if((s[i]=='a' and s[j]=='b' and s[k]=='c') or (s[i]=='b' and s[j]=='c' and s[k]=='a') or (s[i]=='c' and s[j]=='a' and s[k]=='b') or (s[i]=='c' and s[j]=='b' and s[k]=='a'))
        {
            c+=length-k;
        }
        maxc=max(c,maxc);
    }
    c=0;
    for (int i = length-1; i >=0; i--)
    {
        int j = i -1;
        int k = i - 2;
        if ((s[i] == 'a' and s[j] == 'b' and s[k] == 'c') or (s[i] == 'b' and s[j] == 'c' and s[k] == 'a') or (s[i] == 'c' and s[j] == 'a' and s[k] == 'b') or (s[i] == 'c' and s[j] == 'b' and s[k] == 'a'))
        {
            c += length - k;
        }
        maxc = max(c, maxc);
    }
    cout<<maxc<<endl;
    return 0;
}

/*
https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/

*/