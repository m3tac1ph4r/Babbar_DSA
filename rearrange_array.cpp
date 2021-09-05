#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int arr[] = {1,2,3,-4,-1,4,-6,-2,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,greater<int>());
    int index;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            index=i;
            break;
        }
    }
    int negative_len=n-index;
    int positive_len=index;
    int i=0,j=index;
    for(int k=0;k<n;k++)
    {
        if(negative_len!=0 and positive_len!=0)
        {
            if(k%2!=0)
            {
                swap(arr[i],arr[j]);
                i++;
                j++;
                negative_len--;
                positive_len--;
            }
            else
            {
                i++;
                // positive_len--;
            }   
        }
        else
        {
            break;
        }
    }
    for (int l = 0; l< n; l++)
    {
        cout<<arr[l]<<endl;
    }
    
    return 0;
}


/*

*/