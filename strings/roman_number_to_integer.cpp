#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int M=1e9+7;
int romantodecimal(string &str)
{
    int num=0;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        switch (ch)
        {
        case 'M':
            num+=1000;
            break;
        case 'D':
            num+=500;
            break;
        case 'C':
            num+=100;
            break;
        case 'L':
            num+=50;
            break;
        case 'X':
            num+=10;
            break;
        case 'V':
            num+=5;
            break;
        case 'I':
            num+=1;
            break;        
        default:
            break;  
        }
    }
    for(int i=1;i<str.length();i++)
    {
        if(str[i-1]=='I' and (str[i]=='V' or str[i]=='X'))
            num=num-1-1;
        else if(str[i-1]=='X' and (str[i]=='L' or str[i]=='C'))
            num=num-10-10;
        else if(str[i-1]=='C' and (str[i]=='D' or str[i]=='M'))
            num=num-100-100;
    }
    return num;
}    
int main()
{
    string s;
    cin>>s;
    cout<<romantodecimal(s);
    return 0;
}