#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,r,root,g,ans;
    vector<bool>p(100000,true);
    vector<ll>prime;
    for(i=2; i*i<=100000; i++)
    {
        if(p[i]==true)
        {
            for(j=i*i; j<=100000; j=j+i)
            {
                p[j]=false;
            }
        }
    }
    for(i=2; i<=100000; i++)
    {
        if(p[i])
        {
            prime.push_back(i);
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        root=sqrt(n);
        vector<ll>primeFactor;
    vector<ll>fre;
        for(i=0; i<prime.size()&&prime[i]<=root; i++)
        {
            if(n%prime[i]==0)
            {
                ll c=0;
                while(n%prime[i]==0)
                {
                    n=n/prime[i];
                    c++;
                }
                primeFactor.push_back(prime[i]);
                fre.push_back(c);
                root=sqrt(n);
            }
        }
        if(n!=1)
        {
            primeFactor.push_back(n);
            fre.push_back(1);
        }
        vector<pair<ll,ll>>pa;
        g=1;
        for(int i=0; i<primeFactor.size(); i++)
        {
            ///cout<<primeFactor[i]<<" "<<fre[i]<<endl;
            pa.push_back({fre[i],primeFactor[i]});
        }
        sort(pa.begin(),pa.end());
        g=1;
        for(i=0;i<pa.size();i++)
        {
            g=g*pa[i].second;
        }
        k=0,ans=0;
        for(i=0;i<pa.size();i++)
        {
            ll x=pa[i].first;
            x=x-k;
            if(x>0)
            {
                ans=ans+(g*x);
                k=k+x;
                g=g/pa[i].second;
            }
            else
            {
                g=g/pa[i].second;
            }
        }
        cout<<ans<<endl;
    }
}

