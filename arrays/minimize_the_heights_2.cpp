#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int arr[]={2,6,3,4,7,2,10,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    sort(arr, arr + n);
    int minnum, maxnum, result = arr[n - 1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= k)
        {
            maxnum = max(arr[i - 1] + k, arr[n - 1] - k);
            minnum = min(arr[i] - k, arr[0] + k);
            result = min(result, maxnum - minnum);
        }
        else
        {
            continue;
        }
    }
    cout<<result<<endl;
    return 0;
}

/*

https://www.youtube.com/watch?v=29uyA4F9t5I

https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1#


Given an array arr[] denoting heights of N towers and a positive integer K, 
you have to modify the height of each tower either by increasing or decreasing them by K only once.
 After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest and longest 
towers after you have modified each tower.

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.

Input:
K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
Output:
11
Explanation:
The array can be modified as
{6, 12, 9, 13, 17}. The difference between 
the largest and the smallest is 17-6 = 11.

*/