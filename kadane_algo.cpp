#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    ll int n;
    cin>>n;
    int arr[n]={0};
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int max_sum=arr[0],sum=arr[0];
    for(int i=1;i<n;i++)
    {
        sum=max(arr[i],sum+arr[i]);
        max_sum=max(sum,max_sum);
    }
    cout<<max_sum;
    return 0;
}