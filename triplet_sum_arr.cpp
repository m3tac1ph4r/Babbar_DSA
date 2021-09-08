#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int A[]={1,4,45,6,10,8};
    int n=sizeof(A)/sizeof(A[0]);
    int i=0;
    int X=13;
    int sum=0;
    int ans=0;
    sort(A,A+n);
    for(i=0;i<n;i++)
    {
        int j=n-1;
        int l=i+1;
        while (l<j)
        {
            sum=A[i]+A[j]+A[l];
            if(sum==X)
            {
                ans=1;
                break;
            }
            else if(sum<X)
                l++;
            else
                j--;
        }   
    }
    cout<<ans<<endl;
    return 0;
}