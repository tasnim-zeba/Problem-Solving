#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,k,l,r,mid,i;
    cin>>n>>m>>k;
    l=1,r=n*m+1;
    while(l<r)
    {
        mid=(l+r)/2;
        ll x=0;
        for(i=1;i<=n;i++)
        {
            x+=min(m,(mid-1)/i);
        }
        if(x<k)
        {
            l=mid+1;
        }
        else
        {
            r=mid;
        }
    }
    cout<<l-1<<endl;
}
