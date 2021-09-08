#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    vector<long long> a = {17,83,59,25,38,63,25,1,37};
    int n=a.size();
    int m=9;
    sort(a.begin(),a.end());
    int diff=INT_MAX;
    int mina,maxa;
    for (int i = 0; i < n; i++)
    {
        mina=a[i];
        maxa=a[i];
        for (int j = i+1; j<i+m;j++)
        {
            if(a[j]<mina)
                mina=a[j];
            if(a[j]>maxa)
                maxa=a[j];
        }
        diff=min(diff,maxa-mina);
    }
    cout<<diff;
    return 0;
}

/*
Above code is correct but in some test case the answer 
will be differ because of space complexity or time complexity 
because required time complexity is : O(N*Log(N))
and space complexity is : O(1)

So we can use 1 for loop instead of 2 for loop 

    for(int i=0;i+m-1<n;i++)
    {
        mina=a[i];
        maxa=a[i+m-1];
        diff=maxa-mina;
        min_diff=min(diff,min_diff);
    }

The above for loop is doing the same thing which we have done in one for loop

Explanation: 
i=0 then loop will take condition as i+m-1 i.e 0+5-1=4 It means we will 
have subarray from 0 to 4 i.e 5 elements

As the array is sorted we will have minimum element at A[0] and largest element A[i+m-1] of that subarray

we have -1 because if we will take i+m then it will take 6 element 0 to 5 So we have to subtract 1

*/
