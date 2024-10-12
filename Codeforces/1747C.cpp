#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        c1=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            c1=min(c1,a[i]);
        }
        if(c1==a[0])
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
    }
}
