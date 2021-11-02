#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
string longestcommonprefix(vector<string> &strs)
{
    int n=strs.size();
    int min_len=INT_MAX,pos;
    for(int i=0;i<n;i++)
    {
        if(int(strs[i].length())<min_len)
        {
            min_len=int(strs[i].length());
            pos=i;
        }        
    }
    string pre=strs[pos];
    for(int i=0;i<min_len;i++)
    {
        if(pre=="")
            break;
        else
        {
            int check=0;
            for(int i=0;i<n;i++)
            {
                if(pre==strs[i].substr(0,pre.length()))
                    check++;
            }
            if(check==n)
                break;
            else
                pre=pre.substr(0,int(pre.length()-1));
        }
    }
    return pre;
}
int main()
{
    vector<string> s={"flower","flow","flight"};
    cout<<longestcommonprefix(s);
    return 0;
}

/*
https://leetcode.com/problems/longest-common-prefix/
*/