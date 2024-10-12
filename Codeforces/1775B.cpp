#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,x,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<ll,ll>mp;
        vector<vector<ll>>v(n+1);
        for(j=1;j<=n;j++)
        {
            cin>>k;
            for(i=1;i<=k;i++)
            {
                cin>>x;
                v[j].push_back(x);
                mp[x]++;
            }
        }
        int f=0;
        for(i=0;i<v.size();i++)
        {
            p=0;
            for(j=0;j<v[i].size();j++)
            {
                if(mp[v[i][j]]==1)p=1;
                //cout<<v[i][j]<<endl;
            }
            if(p==0&&v[i].size())
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
