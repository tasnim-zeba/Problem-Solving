#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,j,e,o;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        e=o=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if(e==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(o==0)
        {
            ll c=INT_MAX;
            for(i=0;i<n;i++)
            {
                ll f=0;
                while(a[i]%2==0)
                {
                    a[i]/=2;
                    f++;
                }
                c=min(c,f);
            }
            cout<<c+(n-1)<<endl;
        }
        else{
            cout<<e<<endl;
        }
    }
}
