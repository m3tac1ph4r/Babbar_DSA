#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    string s = "aababcabc";
    int c=0;
    int length=s.length();
    for (int i = 0; i < length-3+1; i++)
    {
        int j=i+1;
        int k=i+2;
        if(s[i]!=s[j] and s[i]!=s[k] and s[j]!=s[k])
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}

/*
https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
I solved this question using sliding window technique
*/