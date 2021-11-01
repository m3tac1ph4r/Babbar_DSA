#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
int solve(int i,int j,string s,char ch[6][6],int size,int idx)
{
    int found=0;
    if(i>=0 and j>=0 and i<6 and j<6 and ch[i][j]==s[idx])
    {
        char temp=ch[i][j];
        idx++;
        if(idx==size)
            found=1;
        else
        {
            found+=solve(i-1,j,s,ch,size,idx);
            found += solve(i , j-1, s, ch, size, idx);
            found += solve(i +1,j, s, ch, size, idx);
            found += solve(i,j+1, s, ch, size, idx);
        }
        ch[i][j]=temp;
    }
    return found;
}    
int main()
{
    char ch[6][6];
    string s;
    cin>>s;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>ch[i][j];
        }
    }
    int ans=0;
    for (int i = 0; i < 6; i++)
    {
        for(int j=0;j<6;j++)
        {
            ans=ans+solve(i,j,s,ch,s.length(),0);
        }
    }
    cout<<ans<<"\n";
    
    return 0;
}
