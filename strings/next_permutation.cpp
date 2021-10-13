#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
        cin>>arr[i];
    int idx=-1;
    for(int i=N-1;i>0;i--){
        if(arr[i]>arr[i-1]){
            idx=i;
            break;
        }
    }
    if(idx==-1)
        sort(arr.begin(),arr.end());
    else{
        int prev=idx;
        for(int i=idx+1;i<N;i++){
            if(arr[i]>arr[idx-1] and arr[i]<=arr[prev])
                prev=i;
        }
        swap(arr[idx-1],arr[prev]);
        reverse(arr.begin()+idx,arr.end());
    }
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}

/*

https://practice.geeksforgeeks.org/problems/next-permutation5226/1#

*/