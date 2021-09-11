#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    ll int volume=0;
    int arr[] = {4,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l[n],r[n]; // the l[] will store maximum from 0 to n-1 and r[] will store maximum from n-1 to 0
    int ma1=0,ma2=0;
    for (int i = 0; i < n; i++)
    {
        ma1=max(ma1,arr[i]);
        l[i]=ma1;
    }
    for (int i = n-1; i>=0; i--)
    {
        ma2 = max(ma2, arr[i]);
        r[i] = ma2;
    }
    for (int i = 0; i < n; i++)
    {
        volume+=min(l[i],r[i])-arr[i]; // this means if we have arr[i]=2 and in left max is 8 and right max is 5 then we can only store 5-2 = 3 volume water
    }
    cout<<volume<<endl;
    return 0;
}




/* 
The above approach is having 
Time complexity : O(n)
Space complexity : O(n)

*/


/*
The below code is my approach. I am geeting TLE in the below code

ll int volume=0;
    int arr[] = {8,8,2,4,5,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int current,before,after,ans,current_max;
    for (int i = 0; i < n; i++)
    {
        current_max=*max_element(arr,arr+i);
        current=arr[i];
        if(current==0)
        {
            before=*max_element(arr,arr+i);
            after=*max_element(arr+i,arr+n);
            ans=min(before,after);
            volume+=ans;
        }
        else if(current<current_max and i!=n-1)
        {
            after=*max_element(arr+i,arr+n);
            if(after>current_max)
                ans=abs(current_max-current);
            else
                ans=abs(after-current);
            volume+=ans;
        }
    }
    cout<<volume<<endl;

Time complexity : O(n^2)
*/