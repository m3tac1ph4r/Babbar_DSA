#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    vector<pair<int,int>> s;
    int c=0;
    s.push_back({v[0].first,v[0].second});
    for(int i=1;i<n;i++)
    {
        int start1=s[s.size()-1].first;
        int end1=s[s.size()-1].second;
        int start2=v[i].first;
        int end2=v[i].second;
        if(end1>=start2)
        {
            s.pop_back();
            end1=max(end1,end2);
            s.push_back({start1,end1});
        }
        else
            s.push_back({start2,end2});        
    }
    cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++)
        cout<<s[i].first<<" "<<s[i].second<<endl;
    return 0;
}

/*
https://leetcode.com/problems/merge-intervals/

start1 ----> stack top first element
end1 ------> stack top second element

start2 -----> vector ith first element
end2 -------> vector ith second element


Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
If 3 is greater than 2 then it will merge otherwise not

*/

/*LEETCODE SOLUTION
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        for (auto interval : intervals) {
            // if the list of merged intervals is empty or if the current
            // interval does not overlap with the previous, simply append it.
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            // otherwise, there is overlap, so we merge the current and previous
            // intervals.
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
    }
*/