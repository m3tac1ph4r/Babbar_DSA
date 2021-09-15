#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    vector<int> nums={1,12,-5,-6,50,3};
    int length=nums.size();
    int k=4;
    double sum=0;
    float avg,max_avg=INT_MIN;
    for (int  i = 0; i < k; i++)
    {
        sum+=nums[i];
    }
    avg=sum/k;
    max_avg=max(avg,max_avg);
    for (int i = 1; i <length-k+1; i++)
    {
        int before=nums[i-1];
        int after=nums[i+k-1];
        sum-=before;
        sum+=after;
        avg=sum/k;
        max_avg=max(avg,max_avg);
    }
    cout<<max_avg<<endl;    
    return 0;
}

/*
The above question I solved using sliding window technique
https://leetcode.com/problems/maximum-average-subarray-i/
*/