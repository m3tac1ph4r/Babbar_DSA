#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
bool check(int i,int j,vector<vector<char>> &grid,string word,int &R,int &C)
{
    if(grid[i][j]!=word[0])
        return false;
    for(int dir=0;dir<8;dir++)
    {
        int k,rd=i+dx[dir],cd=j+dy[dir];
        for(k=1;k<word.length();k++)
        {
            if(rd<0 or rd>=R or cd<0 or cd>=C)
                break;
            if(grid[rd][cd]!=word[k])
                break;
            rd+=dx[dir];cd+=dy[dir];
        }
        if(k==word.length())
            return true;
    }
    return false;
}    
int main()
{
    vector<vector<char>> grid = {{'a', 'b', 'a', 'b'}, {'a', 'b', 'e', 'b'}, {'e', 'b', 'e', 'b'}};
    string word="abe";
    int R=grid.size();
    int C=grid[0].size();
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(check(i,j,grid,word,R,C))
                cout<<"Pattern found at "<<i<<" "<<j<<endl;
        }
    }
    return 0;
}