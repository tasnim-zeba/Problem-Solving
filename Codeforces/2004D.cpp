#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, q;
        cin>>n>>q;
        unordered_map<string, vector<ll>>mp;
        string a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            mp[a[i]].push_back(i);
        }
        while(q--)
        {
            ll x, y;
            cin>>x>>y;
            if(x>y)
            {
                swap(x, y);
            }
            if(a[x][0]==a[y][0] || a[x][0]==a[y][1] || a[x][1]==a[y][0] || a[x][1] == a[y][1])
            {
                cout<<y-x<<endl;
                continue;
            }
            ll ans = LLONG_MAX;
            for(auto &ch: mp)
            {
                string s = ch.first;
                if(s==a[x] || s==a[y])continue;
                int it = upper_bound(ch.second.begin(), ch.second.end(), y)-ch.second.begin();
                if(it!=ch.second.size()){
                    ans = min(ans,(ch.second[it]-y)+(ch.second[it]-x));
                }
                it--;
                if(it>=0)
                {
                    if(ch.second[it]>=x)
                    {
                        ans = min(ans,y-x);
                    }
                    else{
                        ans = min(ans,(y-ch.second[it])+(x-ch.second[it]));
                    }
                }
            }
            if(ans==LLONG_MAX){
                cout<<-1<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }

    }
}

