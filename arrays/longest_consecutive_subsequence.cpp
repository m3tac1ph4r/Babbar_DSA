#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int arr[6] = {8,9,1,2,3,1};
    int n=6;
    sort(arr,arr+n);
    int maxc=0,c=0;
    int maxele=*max_element(arr,arr+n);
    int temp[maxele+1]={0};
    for(int i=0;i<n;i++)
    {
        temp[arr[i]]++;
    }
    for (int i = 0; i < maxele+1; i++)
    {
        if(temp[i]>0)
        {   
             c++;
             maxc=max(c,maxc);
        }
        else
            c=0;
        
    }
    cout<<maxc;
    return 0;
}


/*
I made one array of maximum element size and stored the frequency of all elements from 0 to maxelement
Then checked if that number is having frquency>0 than c++ and update the maxc and if the frequncy is 0 it means it is not consecutive.
*/