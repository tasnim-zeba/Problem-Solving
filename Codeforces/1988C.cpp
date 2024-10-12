#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v;
        v.push_back(n);
        ll cnt = 1, c=0;
        ll x = v[v.size()-1];
        for(ll i=0; i<=60; i++)
        {
            ll f = 1LL<<i;
            if(n&f)
            {
                c++;
                if(c<=cnt)
                {
                    if(x&f)
                    {
                        x=x&(~(1LL<<i));
                        if(x==0)break;
                    }
                    else
                    {
                        x=(1LL<<i)|x;
                    }
                }
                else
                {
                    v.push_back(x);
                    cnt++;
                    i=-1;
                    c=0;
                }
            }
        }
        if(x)
            v.push_back(x);
        reverse(v.begin(), v.end());
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}
