#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5,m=1e9+7;
int p=31;
vector<ll> power(N);    
int main()
{
    string text,pattern;
    cin>>text;
    cin>>pattern;
    int text_len=text.length();
    int pattern_len=pattern.length();
    vector<ll> hash_text(text_len+1,0);
    ll hash_pattern=0; 
    power[0]=1;
    for(int i=1;i<N;i++)
    {
        power[i]=(power[i-1]*p)%m;
    }
    for(int i=0;i<text_len;i++)
    {
        hash_text[i+1]=(hash_text[i]+(text[i]-'a'+1)*power[i])%m;
    }
    for(int i=0;i<pattern_len;i++)
    {
        hash_pattern=(hash_pattern+(pattern[i]-'a'+1)*power[i])%m;
    }
    for(int i=0;i+pattern_len-1<text_len;i++)
    {
        long long current_hash=(hash_text[i+pattern_len]-hash_text[i]+m)%m;
        if(current_hash == (hash_pattern*power[i])%m)
        {
            cout<<"Found at index "<<i<<"\n";
        }
    }
    return 0;
}

/*
https://www.geeksforgeeks.org/rabin-karp-algorithm-for-pattern-searching/
https://www.youtube.com/watch?v=-WdkLyTeZ3Q
*/