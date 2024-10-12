#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,s,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        x=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            x=x*a[i];
        }
        cout<<(x+n-1)*2022<<endl;
    }
}
