#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int arr[]={2, 1, 5, 6, 3};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int c = 0;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (start == i and arr[i] <= k)
            start++;
        else if (arr[i] <= k)
        {
            swap(arr[i], arr[start++]);
            c++;
        }
    }
    cout<<c;
    return 0;
}

/*
sliding window technique two pointer
https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1

Given an array of n positive integers and a number k. 
Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

Input : arr[ ] = {2, 1, 5, 6, 3} and K = 3
Output : 1
Explanation:
To bring elements 2, 1, 3 together, swap element '5' with '3'
such that final array will be- arr[] = {2, 1, 3, 6, 5}


Input : arr[ ] = {2, 7, 9, 5, 8, 7, 4} and K = 6 
Output :  2 


*/