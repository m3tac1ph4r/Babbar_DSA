#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int arr[]={1, 4, 45, 6, 10, 19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=51;
    int start=0,end=0,sum=0,minlength=n+1;
    while(end<n)
    {
        while (sum<=x and end <n)
        {
            sum+=arr[end++];
        }
        while (sum>x and start<n)
        {
            if(end-start<minlength)
                minlength=end-start;
            sum-=arr[start++];
        }
    }
    cout<<minlength<<endl;
    return 0;
}