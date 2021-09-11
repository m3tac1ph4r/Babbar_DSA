#include<bits/stdc++.h>
using namespace std;
#define ll long long
    
int main()
{
    int arr[5] = {-8,5,3,1,6};
    int n=5;
    int max_product=INT_MIN,product=1;
    for(int i=0;i<n;i++)
    {
            product=product*arr[i];
            max_product=max(max_product,product);
        if(product==0)
            product=1;
    }
    product=1;
    for (int i = n-1;i>=0;i--)
    {
            product = product * arr[i];
            max_product = max(max_product, product);
            if(product==0)
                product = 1;
    }
    cout<<max_product<<"\n";
    return 0;
}

/*
We have done  traversing from left -> right and then right -> left
Because if there will be only one negative 
element then we cannot make product positive and we will get max_product negative.

for example if we take arr[]={-8,5,3,1,6}
left->right 
    product=-8 , -40 ,-120 , -720
    max_product=-8

right->left
    product= 6,18,90,-720
    max_product=90

*/
