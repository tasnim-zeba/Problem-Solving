#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const N=1e5+5;
vector<bool>p(N,true);
ll power(ll base,ll n)
{
    ll result=1;
    while(n)
    {
        if(n%2==1)
        {
            result=result*base;
            n--;
        }
        else
        {
            base=base*base;
            n=n/2;
        }
    }
    return result;
}
int main()
{
    ll t,q,n,i,j,p1,root;
    vector<ll>prime;
    for(i=2; i*i<=N; i++)
    {
        if(p[i]==true)
        {
            for(j=i*i; j<=N; j=j+i)
            {
                p[j]=false;
            }
        }
    }
    for( i=2; i<=N; i++)
    {
        if(p[i])
        {
            prime.push_back(i);
        }
    }
    /* for(i=0;i<prime.size();i++)
     {
         cout<<prime[i]<<" ";
     }*/
    cin>>t;
    while(t--)
    {
        cin>>p1>>q;
         map<ll,ll>mp;
        root=sqrt(q);
        for(i=0; i<prime.size()&&prime[i]<=root; i++)
        {
            if(q%prime[i]==0)
            {
                while(q%prime[i]==0)
                {
                    mp[prime[i]]++;
                    q=q/prime[i];
                }
                root=sqrt(q);
            }
        }
        if(q!=1)
        {
            mp[q]=1;
        }
        int f=0;
        for(auto it:mp)
        {
             ll h=power(it.first,it.second);
             if(p1%h)
             {
                 cout<<p1<<endl;
                 f=1;
                 break;
             }
        }
        if(f==1)continue;
        ll ans=INT_MIN;
        ll tp=p1;
        for(auto it:mp)
        {
             ll x=it.first;
             tp=p1;
             while(tp%x==0)
             {
                 tp=tp/x;
             }
             tp=tp*power(it.first,it.second-1);
             ans=max(ans,tp);
        }
        cout<<ans<<endl;
    }
}
