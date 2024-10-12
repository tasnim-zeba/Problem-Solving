#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,i,j,ans,b,f,q,c,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll a[n+1],p[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(x%a[i]==0)
            {
                p[i]=x/a[i];
            }
            else
            {
                p[i]=(x/a[i])+1;
            }
        }
        b=0;
        ans=0;
        c=0;
        i=n-1;
        f=1;
        vector< pair<ll,ll> >v;
        vector< pair<ll,ll> >::iterator it;
        while(i>=0)
        {
            c=0;
            q=p[i];
            while(i>=0&&p[i]==q)
            {
                c++;
                i--;
            }
            if((c/q)>0)
            {
                ans=ans+(c/q);
            b=b+(c%q);
            }
            else
            {
                s=q-c;
                if(b>=s)
                {
                    ans++;
                    b=b-s;
                }
                else
                {
                    b=b+(c%q);
                }
            }
        }
        cout<<ans<<endl;
    }
}
