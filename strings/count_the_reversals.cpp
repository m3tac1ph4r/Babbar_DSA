#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
int countRev(string s)
{
    int len=s.length();
    if(len%2!=0)
        return -1;
    else
    {
        stack<char> p;
        for(char ch:s)
        {
            if(ch=='}' and !p.empty())
            {
                if(p.top()=='{')
                    p.pop();
                else
                    p.push(ch);
            }
            else
                p.push(ch);
        }
        int stack_len=p.size();
        int n=0;
        while(!p.empty() and p.top()=='{')
        {
            p.pop();
            n++;
        }
        return (stack_len/2+n%2);
    }
}   
int main()
{
    string s;
    cin>>s;
    cout<<countRev(s)<<"\n";
    return 0;
}

/*
https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1

Input:
S = "}{{}}{{{"
Output: 3
Explanation: One way to balance is:
"{{{}}{}}". There is no balanced sequence
that can be formed in lesser reversals.
*/