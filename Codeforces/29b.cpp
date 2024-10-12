#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<map>
#include<iterator>
#define ll

using namespace std;
int main()

    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll>a(n),b(n);
        set<ll>s;
        set<ll> :: iterator it;
        vector<ll>v[n+2];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        for(int i=0; i<n; i++)
        {
            v[a[i]].pb(b[i]);
        }
        vector<ll>ans(n+2,0);
        for(it = s.begin(); it!=s.end(); it++)
        {
            ll r = *it;
            sort(v[r].rbegin(),v[r].rend());
        }
        for(it = s.begin(); it!=s.end(); it++)
        {
            ll r = *it;
            ll p=0;
            for(ll i=1; i<v[r].size(); i++)
            {
                v[r][i]+=v[r][i-1];
            }
            ll len = v[r].size();
            ll u=1;
            while(1)
            {
                ll e = len/u;
                if(e<=0)
                {
                    break;
                }
                ll q = e*u;
                q--;
                ans[u]+=v[r][q];
                u++;
            }
        }
        for(ll i=1; i<=n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << nl;
    }
}
