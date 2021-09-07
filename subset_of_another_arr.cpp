#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int a1[]={11, 1, 13, 21, 3, 7};
    int a2[]={11, 3, 7, 1};
    int n=sizeof(a1)/sizeof(a1[0]);
    int m=sizeof(a2) / sizeof(a2[0]);
    unordered_map<int,int> s;
    for (int i = 0; i < n; i++)
    {
        s[a1[i]]++;
    }
    int c=0;
    for (int  j = 0; j < m; j++)
    {
        if(s[a2[j]])
            c++;
        else
            break;
    }
    if(c!=m)
        cout<<"No"<<endl;
    else
        cout << "Yes" << endl;
    return 0;
}




/*
We can use other method like (sorting+binary search)
or (sorting + two ptr) or (hashing)
*/