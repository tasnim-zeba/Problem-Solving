#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N=1e5;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,i,j,r,l,m,c,f,x,root;
    vector<bool>p(N,true);
    vector<int>prime;
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
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        map<ll,ll>mp;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        f=-1;
        for(j=0; j<n; j++)
        {
            x=a[j];
            root=sqrt(x);
            for(i=0; i<prime.size()&&prime[i]<=root; i++)
            {
                if(x%prime[i]==0)
                {
                    mp[prime[i]]++;
                    if(mp[prime[i]]>1)
                    {
                        f=1;
                        break;
                    }
                    while(x%prime[i]==0)
                    {
                        x=x/prime[i];
                    }
                    root=sqrt(x);
                }
            }
            if(f==1)break;
            if(x!=1)
            {
                mp[x]++;
                if(mp[x]>1)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
