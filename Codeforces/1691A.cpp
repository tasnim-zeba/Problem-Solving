#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        vector<pair<ll,ll>>v;
        for(i=1;i<=n;i++)
        {
           cin>>a[i];
            v.push_back({a[i],i});
        }
        int f=1;
        sort(v.begin(),v.end());
        ll ans[n+1];
        vector<vector<ll>>abc(n+1);
        int p=0;
        for(i=0;i<n;i++)
        {
                if(i!=0)
                {
                    if(v[i].first!=v[i-1].first)
                    {
                        if(abc[p].size()<2)
                        {
                            f=0;
                            break;
                        }
                        p++;
                    }
                }
                abc[p].push_back(v[i].second);
        }
        if(f==0)
        {
            cout<<-1<<endl;
            continue;
        }
        /*for(i=0;i<=p;i++)
        {
            ans[abc[i][0]]=ans[abc[i][abc[i].size()-1]];
            for(j=1;j<abc[i].size();j++)
            {
                ans[abc[i][j]]=ans[abc[i][j-1]];
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        */
        for(i=0;i<=p;i++)
        {
            for(j=0;j<abc[p].size();j++)
            {
                cout<<abc[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
