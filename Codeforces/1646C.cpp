#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N=1e12+5;
int main()
{
    ll i,x,t,n,ans,s,j,f,p,tn;
    vector<ll>v;
    x=1;
    s=1;
    for(i=1;i<=14;i++)
    {
        s=s*2;
        x=x*i;
        v.push_back(x);
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll r=INT_MAX;
        for(i=0;i<=s;i++)
        {
           ans= p=0;
            for(j=0;j<14;j++)
            {
                f=1<<j;
                if(i&f)
                {
                    p=p+v[j];
                    ans++;
                }
            }
            tn=n;
            if(p>tn)
            {
                continue;
            }
            tn=tn-p;
           while(tn>0){
                ans++;
                tn=(tn&(tn-1));
            }
            r=min(r,ans);
        }
        cout<<r<<endl;
    }
}
