#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
ll int countPS(string str)
{
    ll int count=str.length();
    int start=0,end=1;
    for(int i=1;i<str.length();i++)
    {
        int low=i-1,high=i;
        while (low>=0 and str[low]==str[high])
        {
            count++;
            low--;
            high++;
        }
        low=i-1,high=i+1;
        while (low >= 0 and str[low] == str[high])
        {
            count++;
            low--;
            high++;
        }
    }
    return count;
}    
int main()
{
    string  str;
    cin>>str;
    long long int ans=countPS(str);
    ans=ans%M;
    cout<<ans<<"\n";
    return 0;
}