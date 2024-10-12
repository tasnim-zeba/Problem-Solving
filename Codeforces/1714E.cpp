#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool func(ll x,ll y)
{
    ll p=x+20;
    vector<ll>v;
    v.push_back(x);
    while(1)
    {
        if(x==y)
        {
            return true;
        }
        if((x%10)==0)
        {
            return false;
        }
        x+=(x%10);
        if(x==p)break;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++)
    {
        if((y-v[i])%20==0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ll t,n,i,j,x,y,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
            {
                a[i]+=a[i]%10;
            }
        }
        y=*max_element(a,a+n);
        f=1;
        for(i=0;i<n;i++)
        {
            x=a[i];
            if(x==y);
            else
            {
                if(!func(x,y))
                {
                    f=0;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
