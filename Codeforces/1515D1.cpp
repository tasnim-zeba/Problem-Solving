#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,l,r,i,j,x,c,ans,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        vector<pair<ll,string> >v;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            c++;
            if(c<=l)
            {
                v.push_back(make_pair(x,"L"));
            }
            else
            {
                v.push_back(make_pair(x,"R"));
            }
        }

        sort(v.begin(),v.end());
       ll vis[n+1]={0};
        c=0;
        for(i=0;i<(v.size()-1);i++){
            for(j=i+1;j<v.size();j++){
                if(vis[i]==0)
                {
                    if((v[i].first==v[j].first)&&(v[i].second!=v[j].second))
                    {
                        c++;
                        vis[i]=1;
                        vis[j]=1;
                        break;
                    }
                }
            }
        }
        ///cout<<c<<endl;
      ans=0;
      if(c<(n/2))
        {
            f=0;
            for(i=0;i<(v.size()-1);i++){
            for(j=i+1;j<v.size();j++){
                if(vis[i]==0)
                {
                    if(((v[i].first!=v[j].first)&&(v[i].second!=v[j].second))||((v[i].first==v[j].first)&&(v[i].second==v[j].second)))
                    {
                       ans=ans+1;
                        vis[i]=1;
                        vis[j]=1;
                        c++;
                        if(c==(n/2))
                        {
                            f=1;
                        }
                        break;
                    }
                }
            }
            if(f==1)
            {
                break;
            }
        }
        }

        if(c<(n/2))
        {
             f=0;
            for(i=0;i<(v.size()-1);i++){
            for(j=i+1;j<v.size();j++){
                if(vis[i]==0)
                {
                    if((v[i].first!=v[j].first)&&(v[i].second==v[j].second))///||(v[i].first==v[j].first)&&(v[i].second!=v[j].second))
                    {
                       ans=ans+2;
                        vis[i]=1;
                        vis[j]=1;
                        c++;
                        if(c==(n/2))
                        {
                            f=1;
                        }
                         break;
                    }
                }
            }
            if(f==1)
            {
                break;
            }
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}

