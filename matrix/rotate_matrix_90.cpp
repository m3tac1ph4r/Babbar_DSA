#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int j=0;j<3;j++)
    {
        for(int i=2;i>=0;i--)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

/*
https://www.geeksforgeeks.org/rotate-a-matrix-by-90-degree-in-clockwise-direction-without-using-any-extra-space/
*/