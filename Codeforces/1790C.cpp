#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1][n+1];
        ll vis[n+1];
        for(i=1;i<=n;i++)
        {
            vis[i]=0;
            for(j=1;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        k=1;
        vector<ll>v;
        for(j=n-1;j>=1;j--)
        {
            map<ll,ll>mp;
            for(i=1;i<=n;i++)
            {
                mp[a[i][j]]++;
            }
           for(auto it:mp)
            {
                if(it.second==k&&vis[it.first]==0)
                {
                    v.push_back(it.first);
                    vis[it.first]=1;
                    break;
                }
            }
            k++;
        }
        reverse(v.begin(),v.end());
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)v.push_back(i);
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

