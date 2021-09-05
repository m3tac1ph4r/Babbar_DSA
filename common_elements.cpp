#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int A[] = {1,2,3};
    int B[] = {1,2,3};
    int C[] = {1,2,3,4,5,6};
    int n1=3,n2=3,n3=6;
    vector<int> v;
    unordered_map<int,int> m1,m2,m3;
    for (int i = 0;i<n1; i++)
    {
            m1[A[i]]++;
    }
    for (int i = 0; i < n2; i++)
    {
        m2[B[i]]++;
    }
    for (int i = 0; i < n3; i++)
    {
        m3[C[i]]++;
    }
    for(int i=0;i<n1;i++)
    {
        if(m1[A[i]] and m2[A[i]] and m3[A[i]])
        {
            v.push_back(A[i]);
            m1[A[i]]=0;
        }
    }
    return 0;
}

/*
Time complexity O(n1+n2+n3)
Space complexity O(n1+n2+n3)
*/

/*
This approach is without using unordered_map

void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
{
    // Initialize starting indexes for ar1[], ar2[] and ar3[]
    int i = 0, j = 0, k = 0;
 
    // Iterate through three arrays while all arrays have elements
    while (i < n1 && j < n2 && k < n3)
    {
         // If x = y and y = z, print any of them and move ahead
         // in all arrays
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
         {   cout << ar1[i] << " ";   i++; j++; k++; }
 
         // x < y
         else if (ar1[i] < ar2[j])
             i++;
 
         // y < z
         else if (ar2[j] < ar3[k])
             j++;
 
         // We reach here when x > y and z < y, i.e., z is smallest
         else
             k++;
    }
}

*/