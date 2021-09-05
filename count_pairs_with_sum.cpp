#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int arr[]={1,5,7,1};
    int n=4;
    int k=6;
    int c = 0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int x=k-arr[i];
        if(m[x]==0)
            m[arr[i]]++;
        else
        {
            c=c+m[x];
            m[arr[i]]++;
        }
    }
    cout<<c<<endl;
    return 0;
}

/*
https://www.youtube.com/watch?v=8wrlCL6cvfQ

IN THE ABOVE PROGRAM FIRST I FIND WHETHER THE DIFFERENCE BETWEEN K-ARR[I] IS PRESENT OR NOT
IF IT IS PRESENT THEN WE WILL ADD THE FREQUNCY IN COUNT
ELSE WE WILL ADD THE ELEMENT IN MAP M

EX:
INPUT : 1 5 7 1
OUTPUT: 2
Explanation: (1,5)(5,1)
*/