#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    string s = "vnrtysfrzrmzlygfv";
    int start=0,end=1;
    for(int i=1;i<s.length();i++)
    {
        //even part
        int low=i-1;
        int high=i;
        while(low>=0 and high<s.length() and s[low]==s[high])
        {
            if(high-low+1>end)
            {
                start=low;
                end=high-low+1;
            }
            low--;
            high++;
        }
        // odd part
        low = i - 1;
        high = i+1;             //change
        while (low >= 0 and high < s.length() and s[low] == s[high])
        {
            if (high - low + 1 > end)
            {
                start = low;
                end = high - low + 1;
            }
            low--;
            high++;
        }
    }
    for(int i=start;i<start+end;i++)
    {
        cout<<s[i];
    }
    return 0;
}

/*
BruteForce Approach

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check_palindrom(string s)
{
    string tmp="";
    for(int i=s.length()-1;i>=0;i--)
        tmp=tmp+s[i];
    return (tmp==s);
}
int main()
{
    string S = "vnrtysfrzrmzlygfv";
    string max="";
    for(int i=0;i<S.length();i++)
    {
        int c=1;
        for(int j=i;j<S.length();j++)
        {
            string t = S.substr(i, c++);
            if (check_palindrom(t))
            {
                if(t.length()>max.length())
                    max=t;
            }
            
        }
    }
    cout<<max;
    return 0;
}


*/