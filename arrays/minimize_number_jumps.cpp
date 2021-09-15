#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int n;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxR = arr[0];
    int step = arr[0];
    int jump = 1;
    if(n==1)
        return 0;
    else if(arr[0]==0)
        return -1;
    else
    {
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
                cout<<jump;
            maxR=max(maxR,i+arr[i]);
            step--;
            if(step==0)
            {
                jump++;
                if(i>=maxR)
                    return -1;
                step = maxR - i;
            }
        }
    }
}

/*
sliding window technique two pointer

https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

Video Tutorial
https://youtu.be/CqgK_qi4SKQ?list=RDCMUC__WEiLwRXmgTHZQ4hYAk_w

*/