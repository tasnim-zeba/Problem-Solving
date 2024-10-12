#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        map<ll,ll>::iterator it1;
        for(i=0; i<n; i++)
        {
            if(a[i]%k==0);
            else
            {
                ll p=((a[i]/k)+1)*k-a[i];
                if(mp[p]==0)
                {
                    mp[p]++;
                }
                else
                {
                    mp[p+k]++;
                }
            }
        }
        if(mp.empty())
        {
            cout<<0<<endl;
            continue;
        }
        it=mp.begin();
        ll ans=(it->first);
        (it->second)--;
        ans++;
        if((it->second))
        {
            ll p=(it->second);
            ll q=(it->first)+k;
            mp[q]=mp[q]+p;
            it->second=0;
        }
        it++;
        for(it1=mp.begin(); it!=mp.end(); it++,it1++)
        {
            ans=ans+(it->first)-(it1->first);
            (it->second)--;
            if((it->second))
            {
                ll p=(it->second);
                ll q=(it->first)+k;
                mp[q]=mp[q]+p;
                it->second=0;
            }
        }
        /*it=mp.begin();
        ll ans=(it->first);
        ans++;
        */
        cout<<ans<<endl;
    }
}
