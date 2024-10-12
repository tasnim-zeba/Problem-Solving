#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,x,c,i;
    cin>>n>>k>>x;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    c=1;
    vector<ll>v;
    if(n>1)
    {
    for(i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])>x)
        {
            v.push_back(a[i+1]-a[i]);
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        /*double d;
            d=v[i]/(double)x;
            ll m=ceil(d);
            m--;*/
            ll m;
            m=v[i]/x;
            if(v[i]%x==0)
            {
                m--;
            }
            if(k>=m)
            {
                k=k-m;
            }
            else
            {
                break;
            }
    }
    if(v.size()==0)
    {
        c=1;
    }
    else
    {
        c=v.size()-i+1;
    }

    /*for(i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])>x)
        {
            double d;
            d=(a[i+1]-a[i])/(double)x;
            ll m=ceil(d);
            if(k>=m)
            {
                k=k-m;
            }
            else
            {
                c++;
            }
        }
    }*/
    }
    cout<<c<<endl;
    return 0;
}
