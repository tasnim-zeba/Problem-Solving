#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,mn,k;
    cin>>n;
    ll s[n+1],c[n+1];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    mn=LLONG_MAX;
    ll x=0;
    for(i=0;i<n;i++)
    {
        x=0;
        ll m1=LLONG_MAX,m2=LLONG_MAX;
        for(j=i-1;j>=0;j--)
        {
            if(s[j]<s[i])
            {
                m1=min(m1,c[j]);
            }
        }
        for(j=i+1;j<n;j++)
        {
            if(s[j]>s[i])
            {
                m2=min(m2,c[j]);
            }
        }
        if(m1!=LLONG_MAX&&m2!=LLONG_MAX)
        x=m1+m2+c[i];
        else
        {
            x=LLONG_MAX;
        }
        mn=min(mn,x);
    }
    if(mn==LLONG_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<mn<<endl;
    }
}
