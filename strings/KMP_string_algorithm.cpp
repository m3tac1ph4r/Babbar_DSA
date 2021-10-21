#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> prefix_function(string s)
{
    int n = s.length();
    vector<int> p(n, 0);
    for (int i = 1; i < n; i++)
    {
        int j = p[i - 1];
        while (j > 0 and s[i] != s[j])
        {
            j = p[j - 1];
        }
        if (s[i] == s[j])
            j++;
        p[i] = j;
    }
    return p;
}
int main()
{
    string text,pattern;
    cin>>text;
    cin>>pattern;
    vector<int> prefix=prefix_function(text);
    int pos(-1),i(0),j(0);
    while(i<text.length())
    {
        if(text[i]==pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j!=0)
                j=prefix[i-1];
            else
                i++;
        }
        if(j==pattern.length()){
            pos=i-pattern.size();
            break;
        }
    }
    cout<<pos<<"\n";
    return 0;
}

/*
This code is for KMP algorithm pattern matching

INPUT: text="apna college" pattern="na"
OUTPTUT: 2
*/