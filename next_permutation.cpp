#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i:v)
        cin>>i;
    if (next_permutation(v.begin(), v.end()))
    {
        for(auto i:v)
            cout<<i<<" ";
    }
    else
    {    
        sort(v.begin(),v.end());
        for (auto i : v)
            cout << i << " ";
    }
        return 0;
}

/*
https://leetcode.com/problems/next-permutation/

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
Example 4:

Input: nums = [1]
Output: [1]

*/