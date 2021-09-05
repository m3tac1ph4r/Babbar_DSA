#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    ll int n,m;
    cin>>n>>m;
    ll int c=0;
    int arr1[n]={0};
    int arr2[m]={0};
    int arr3[n+m]={0};
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int j=0;j<m;j++)
        cin>>arr2[j];
    merge(arr1,arr1+n,arr2,arr2+m,arr3);
    for(int i=0;i<n;i++)
        arr1[i]=arr3[c];
    for(int j=0;j<m;j++)
        arr2[j]=arr3[c++];
    // cout<<"Arr 1"<<endl;
    // for(int i=0;i<n;i++)
    //     cout<<arr1[i]<<endl;
    // cout<<"\n"<<"Arr 2"<<endl;
    // for(int i = 0; i < m; i++)
        // cout << arr2[i] << " ";
    return 0;
}

/*
https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1
*/