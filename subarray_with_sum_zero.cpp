#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int arr[] = {4,2,-3,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> m;
    int prefix_sum=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        prefix_sum+=arr[i];
        if(arr[i]==0)
        {
            flag=1;
            break;
        }
        else if(prefix_sum==0)
        {
            flag=1;
            break;
        }
        else if(m[prefix_sum]==0)
        {
            m[prefix_sum]++;
        }
        else if(m[prefix_sum]>0)
        {
            flag=1;
            break;
        }
        else
            m[prefix_sum]++;
    }
    if(flag==1)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}