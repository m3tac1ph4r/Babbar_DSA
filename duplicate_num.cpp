#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int c;
    vector<int> nums{1,1};
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<endl;
        if(i+1<nums.size())
        {
            if(nums[i]==nums[i+1])
            {
                c=nums[i];
                break;
            }
        }
    }
    cout<<c;
}




/*
https://leetcode.com/problems/find-the-duplicate-number/
*/