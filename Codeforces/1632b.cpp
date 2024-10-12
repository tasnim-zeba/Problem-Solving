#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=log2(n-1);
        x=pow(2,x);


        for(i=1;i<x;i++)
        {
            cout<<i<<" ";
        }
        cout<<0<<" ";
        for(i=x;i<n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}

