#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,e,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        e=1;
        map<ll,ll>mp;
        for(i=1; ; i++)
        {
            x=(ll)pow(k,i);
            if(x>1e16)break;
            mp[x]=i;
        }
       /* for(auto it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        */
        int c=1;
         for(i=0; i<n; i++)
        {
            while(a[i])
            {
                if(e==1&&a[i]==1)
                {
                    e=0;
                    break;
                }
                auto it=mp.upper_bound(a[i]);
                if(it==mp.begin())
                {
                    c=0;
                    break;
                }
                it--;
                a[i]-=(*it).first;
                ///ll o=(*it).first;
                mp.erase((*it).first);
            }
            if(c==0)
            {
                break;
            }
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
