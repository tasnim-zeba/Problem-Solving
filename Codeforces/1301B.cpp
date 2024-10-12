#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll ar[100005],ll n,ll k)
{
    for(ll i=0;i<n;i++)
    {
        if(ar[i]==-1)
        {
            ar[i]=k;
        }
    }
     ll m=INT_MIN;
    for(ll i=0;i<n-1;i++)
    {
        m=max(m,abs(ar[i]-ar[i+1]));
    }
    return m;
}
int main()
{
    ll t,n,i,c,m,k,mn,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        c=0;
        mn=INT_MAX,mx=INT_MIN;
        for(i=0;i<n;i++)
        {
            if((i-1)>=0&&(i+1)<n)
            {
                if(a[i]!=-1&&(a[i-1]==-1||a[i+1]==-1))
                {
                    mn=min(mn,a[i]);
                    mx=max(mx,a[i]);
                    c++;
                }
            }
            else if((i-1)>=0)
            {
                if(a[i]!=-1&&a[i-1]==-1)
                {
                    mn=min(mn,a[i]);
                    mx=max(mx,a[i]);
                    c++;
                }
            }
            else if((i+1)<n)
            {
                if(a[i]!=-1&&a[i+1]==-1)
                {
                   mn=min(mn,a[i]);
                    mx=max(mx,a[i]);
                    c++;
                }
            }
        }
        if(c==0)
        {
            k=0;
        }
        else
        {
            k=(mn+mx)/2;
        }
        m=func(a,n,k);
        cout<<m<<" "<<k<<endl;
    }
}
