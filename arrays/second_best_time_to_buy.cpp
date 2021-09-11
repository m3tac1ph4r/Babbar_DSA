#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    vector<int> prices{2, 30, 15, 10, 8, 25, 80};
    int n = prices.size();
    int maxprofit = 0, profit = 0, ele = 0,sum=0;
    int min1,min2,pos;
    for(int i=0;i<n;i++)
    {
        min1=prices[i];
        min2=prices[i+1];
        if(min2<min1)
        {
            pos=i+1;
            break;
        }
    }
    for (int i = pos-1; i>=0; i--)
    {
        ele = max(ele, prices[i]);
        profit = max(ele - prices[i], 0);
        maxprofit = max(profit, maxprofit);
    }
    sum+=maxprofit;
    maxprofit = 0, profit = 0, ele = 0;
    for (int i = n-1; i>=pos; i--)
    {
        ele = max(ele, prices[i]);
        profit = max(ele - prices[i], 0);
        maxprofit = max(profit, maxprofit);
    }
    sum+=maxprofit;
    cout<<sum<<"\n";
    return 0;
}