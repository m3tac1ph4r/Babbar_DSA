#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    vector<int> prices{7, 1, 5, 3, 6, 4};
    int n=prices.size();
    int maxprofit=0,profit=0,ele=0;
    for(int i=n-1;i>=0;i--)
    {
        ele=max(ele,prices[i]);
        profit=max(ele-prices[i],0);
        maxprofit=max(profit,maxprofit);
    }
    cout<<maxprofit;
    return 0;
}

/*
ABOVE APPROACH IS GREEDY ALGO

If you run loop from 0 to n-1 then all the test cases will be passed but you cannot dry run that.
To understand how code works you have to run loop from n-1 to 0

OTHER APPROACHES
https://github.com/keineahnung2345/leetcode-cpp-practices/blob/master/121.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock.cpp
*/