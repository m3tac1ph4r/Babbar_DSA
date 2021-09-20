#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    vector<vector<int>> Mat = {{10, 20, 30, 40},{15, 25, 35, 45}, {27, 29, 37, 48},{32, 33, 39, 50}};
    int N=4;
    int arr[N*N]={0};
    int c=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            arr[c++]=Mat[i][j];
        }
    }
    sort(arr,arr+c);
    c=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            Mat[i][j]=arr[c++];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout<<Mat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}