#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,j,s,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        vector<ll>v;
        for(i=1;i*i<=s;i++)
        {
            if(s%i==0)
            {
                v.push_back(i);
                v.push_back(s/i);
            }
        }
        ll mn=INT_MAX;
        for(i=0;i<v.size();i++)
        {
            x=s/v[i];
            ll c=0;
            ll p=0;
            for(j=0;j<n;j++)
            {
               p=p+a[j];
               if(p>x)
               {
                   c=-1;
                   break;
               }
               if(p==x)
               {
                   c++;
                   p=0;
               }
            }
            if(c!=-1)
            {
                if(c==v[i])
                {
                    mn=min(mn,n-c);
                }
            }
        }
        cout<<mn<<endl;
    }
}
