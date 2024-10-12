#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k,q,i,j,l,r;
    ll ans;
    cin>>n>>q>>k;
    ll a[n+1],p[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        while(q--)
        {
            cin>>l>>r;
            cout<<k-1<<endl;
        }
    }
    else
    {
        p[0]=max(0ll,a[1]-2);
        p[n-1]=max(0ll,k-a[n-2]-1);
        for(i=1; i<n-1; i++)
        {
            p[i]=max(0ll,a[i+1]-a[i-1]-2);
        }
        for(i=1; i<n; i++)
        {
            p[i]=p[i]+p[i-1];
        }
        while(q--)
        {
            cin>>l>>r;
            l--;
            r--;
            if(l==r)
            {
                cout<<k-1<<endl;
            }
            else
            {
                ans=p[r-1]-p[l]+max(0ll,a[l+1]-2)+max(0ll,k-a[r-1]-1);
            cout<<ans<<endl;
            }

        }
    }
    return 0;
}
