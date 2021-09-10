#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    // int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int arr[] = {1, 2, 3, -2, 5};
    // int arr[] = {-1, -2, -3, -4};
    ll int n = sizeof(arr) / sizeof(arr[0]);
    int a[n]={0};
    int c=0;
    int max_sum=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=max(arr[i],sum+arr[i]); 
        max_sum=max(sum,max_sum);
        if (sum<=max_sum and arr[i]<sum+arr[i])
        {
            if(arr[i]<0 and i!=n-1)
            {
                a[c++] = arr[i];
            }
            else if(arr[i]>0)
                a[c++] = arr[i];
        }
    }
    cout<<max_sum<<endl;
    if(c==0)
    {
        a[0]=arr[0];
        c++;
    }
    for(int j=0;j<c;j++)
    {
        cout<<a[j]<<endl;
    }
    return 0;
}

/*
The above code will also print the subarray so if you only want maximum sum then delete these lines

 if (sum<=max_sum and arr[i]<sum+arr[i])
        {
            if(arr[i]<0 and i!=n-1)
            {
                a[c++] = arr[i];
            }
            else if(arr[i]>0)
                a[c++] = arr[i];
        }
    if(c==0)
    {
        a[0]=arr[0];
        c++;
    }
    for(int j=0;j<c;j++)
    {
        cout<<a[j]<<endl;
    }
*/
