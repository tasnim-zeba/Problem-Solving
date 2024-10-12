#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,x,y,s,ans1,ans2;
    cin>>n;
    vector<ll>v;
    vector<ll>:: iterator it;
    s=0;
    for(i=0;i<n;i++)
    {
        ll p;
        cin>>p;
        s=s+p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    cin>>m;
    while(m--)
    {
        cin>>x>>y;
        it=lower_bound(v.begin(),v.end(),x);
        if(it==v.end())
        {
            ll k;
            k=s-v[n-1];
            ans2=x-v[n-1];
            if(k<y)
            {
                ans2+=(y-k);
            }
            else
            {
                ans2+=0;
            }
            cout<<ans2<<endl;
        }
        else if(x<=v[0])
        {
            ll k;
            k=s-v[0];
            if(k<y)
            {
                ans2=(y-k);
            }
            else
            {
                ans2=0;
            }
            cout<<ans2<<endl;
        }
        else
        {
            ll k;
            k=s-*it;
            if(k<y)
            {
                ans1=(y-k);
            }
            else
            {
                ans1=0;
            }
            it--;
            k=s-*it;
            ans2=x-*it;
            if(k<y)
            {
                ans2+=(y-k);
            }
            else
            {
                ans2+=0;
            }
            cout<<min(ans1,ans2)<<endl;;
        }
    }
    return 0;
}
