#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    // vector<vector<int>> matrix = { {1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16} };
    vector<vector<int>> matrix = {{6,6,2,28,2}, {2,26,3,28,7}, {22,25,3,4,23}};
    int r=3,c=5;
    int row_start=0,col_start=0,row_end=r-1,col_end=c-1;
    vector<int> out;
    while(row_start<=row_end and col_start<=col_end)
    {
        //row start
        for(int col=col_start;col<=col_end;col++)
            out.push_back(matrix[row_start][col]);
        row_start++;

        //column end
        for (int  row = row_start; row<=row_end; row++)
            out.push_back(matrix[row][col_end]);
        col_end--;
        
        //row end
        if(row_start<=row_end)
        {
            for(int col=col_end;col>=col_start;col--)
                out.push_back(matrix[row_end][col]);
            row_end--;
        }
        // column start
        if(col_start<=col_end)
        {
            for(int row=row_end;row>=row_start;row--)
                out.push_back(matrix[row][col_start]);
            col_start++;
        }
    }
    for(auto i:out)
        cout<<i<<" ";
    return 0;
}

/*
https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

Given a matrix of size r*c. Traverse the matrix in spiral form.

Input:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}}
Output: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

*/