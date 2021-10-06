#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(string output,int i,int n,string input)
{
    if(i==n)
        cout<<output<<endl;
    else
    {
        solve(output,i+1,n,input);  //without taking input[i] in output
        output=output+input[i];
        solve(output,i+1,n,input);  //taking input[i] in output
    }
}
int main()
{
    string input="abc";
    string output="";
    int n=input.length();
    solve(output,0,n,input);
    return 0;
}

/*
https://www.geeksforgeeks.org/print-subsequences-string/

https://drive.google.com/file/d/11Tbnl3vDc2A4kba39xEPIYi0AI8NyAPh/view?usp=sharing

*/