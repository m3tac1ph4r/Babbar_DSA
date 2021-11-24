#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
int minSwaps(string S)
{
    int n=S.length();
    vector<int> pos;
    int idx=0;
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(S[i]=='[')
            pos.push_back(i);
    }
    for(int i=0;i<n;i++)
    {
        if(S[i]=='[')
        {
            count++;
            idx++;
        }
        else
        {
            count--;
            if(count<0)
            {
                ans+=pos[idx]-i;
                swap(S[i],S[pos[idx]]);
                count=1;
                idx++;
            }
        }
    }
    cout<<"pos ";
    for(int i=0;i<pos.size();i++)
        cout<<pos[i]<<" ";
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<endl<<minSwaps(s);
    return 0;
}