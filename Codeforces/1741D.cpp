#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<ll>v;
ll ans,m,i,j;
void func(ll l1,ll r1,ll l2,ll r2)
{
    ll mn=INT_MAX;
    ll mx=INT_MIN;
    for(i=l1;i<=r1;i++)
    {
        mx=max(mx,v[i]);
    }
    for(i=l2;i<=r2;i++)
    {
        mn=min(mn,v[i]);
    }
    if(mx>mn)
    {
        ans++;
        for(i=l1,j=l2;i<=r1;i++,j++)
        {
            swap(v[i],v[j]);
        }
    }

    if(l1==r1)return;
    else{
        m=(l1+r1)/2;
        func(l1,m,m+1,r1);
    }
    if(l2==r2)return;
    else{
        m=(l2+r2)/2;
        func(l2,m,m+1,r2);
    }
}
int main()
{
    fio
    ll t,n,k,i,j,r,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        v.resize(n+1);
        for(i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        if(is_sorted(v.begin()+1,v.begin()+n+1))
        {
            cout<<0<<endl;
            continue;
        }
        m=n/2;
        func(1,m,m+1,n);
        if(is_sorted(v.begin()+1,v.begin()+n+1))
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
