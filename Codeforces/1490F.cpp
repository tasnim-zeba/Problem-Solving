#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,m,ans,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        vector<ll>v;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            v.push_back(it->second);
        }
        sort(v.begin(),v.end(),greater<int>());
        m=v.size();
        ll pre[m+1],post[m+1];
        pre[0]=v[0];
        for(i=1;i<m;i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        post[m-1]=v[m-1];
        for(i=m-2;i>=0;i--)
        {
            post[i]=post[i+1]+v[i];
        }
        if(m==1)
        {
            cout<<0<<endl;
            continue;
        }
        c=1;
        ans=post[1];
        for(i=1;i<m;i++)
        {
            x=pre[i-1]-(c*v[i]);
            c++;
            if(i==(m-1))
            {
                 ans=min(ans,x);
                break;
            }
            while(v[i]==v[i+1])
            {
                i++;
                c++;
                if(i==(m-1))
                {
                     ans=min(ans,x);
                     break;
                }
            }
            if(i==(m-1))
            {
                break;
            }
            x=x+post[i+1];
            ans=min(ans,x);
        }
        /*for(i=0;i<m;i++)
        {
            cout<<v[i]<<" "<<pre[i]<<" "<<post[i]<<endl;
        }*/
        cout<<ans<<endl;
    }
}
