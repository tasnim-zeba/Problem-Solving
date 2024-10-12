#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,l,r,ans,ml,mr,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        map<ll,ll>::iterator it1;
        for(i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        vector<ll>v;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if((it->second)>=k)
            {
                v.push_back(it->first);
            }
        }
        sort(v.begin(),v.end());
        if(v.size()==0)
        {
            cout<<-1<<endl;
            continue;
        }
        ml=l=v[0],mr=r=v[0],ans=0;
        for(i=1;i<v.size();i++)
        {
            if(v[i]-v[i-1]==1)
            {
                r=v[i];
                if((r-l)>ans)
                {
                    ml=l;
                    mr=r;
                    ans=r-l;
                }
            }
            else
            {
                l=v[i];
            }
        }
        cout<<ml<<" "<<mr<<endl;
    }
}

