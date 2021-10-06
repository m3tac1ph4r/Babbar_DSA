#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    string S="ABC";
    vector<string> ans;
    sort(S.begin(), S.end());
    ans.push_back(S);
    while (next_permutation(S.begin(), S.end()))
    {
        ans.push_back(S);
    }
    for(auto i:ans)
        cout<<i<<endl;
    return 0;
}