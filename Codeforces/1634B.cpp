#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,y,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        ll a[n+1];
        int xr=x;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            xr=xr^a[i];
        }
        if(xr%2==y%2)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}
