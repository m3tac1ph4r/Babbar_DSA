#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
bool comp(pair<string,int>& a,pair<string,int>& b)
{
    return a.second>b.second;
}
string secFreq(string arr[],int n)
{
    unordered_map<string, int> m;
    vector<pair<string, int>> A;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto &i : m)
        A.push_back(i);
    sort(A.begin(), A.end(), comp);
    string ans = A[1].first;
    return ans;
}
int main()
{
    ll int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cout<<secFreq(s,n);
    return 0;
}