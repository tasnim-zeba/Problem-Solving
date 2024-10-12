#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///ll a[100005];
int main()
{
    ll t,n,m,i,j,x,ans,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        map<ll,ll>mp;
        map<ll,ll>:: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>x;
            x=x%m;
            mp[x]++;
        }
        ans=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->first==0&&it->second>0)
            {
                ans++;
            }
           /// else if(mp.count(m-it->first)==0)
           else if(mp[m-it->first]==0)
            {
                ans=ans+it->second;
            }
            else if(m-it->first==it->first)
            {
                ans++;
            }
            else{
                if(m-it->first>it->first)
                {
                    a=it->second;
                    b=mp[m-it->first];
                    ///b=mp.count(m-it->first);
                    if(abs(a-b)<=1)
                    {
                        ans++;
                    }
                    else{
                        if(a>b)
                        {
                            a=a-(b+1);
                            ans++;
                            ans=ans+a;
                        }
                        else{
                            b=b-(a+1);
                            ans++;
                            ans=ans+b;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
