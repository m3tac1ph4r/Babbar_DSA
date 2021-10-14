#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool ispair(string x){
    stack<char> a;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '{' or x[i] == '(' or x[i] == '[')
            a.push(x[i]);
        else if (x[i]=='}' and a.top()!='{')
            return false;
        else if (x[i] == ')' and a.top() != '(')
            return false;
        else if (x[i] == ']' and a.top() != '[')
            return false;
        else
            a.pop();
    }
    if(a.empty())
        return true;
    else
        return false;
}
int main()
{
    string x;
    cin>>x;
    if(ispair(x)==true)
        cout<<"True"<<"\n";
    else
        cout<<"False"<<"\n";
    return 0;
}