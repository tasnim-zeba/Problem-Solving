#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,d,i,j,l,r,x,s,p;
    cin>>n>>d;
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    s=0;
    for(i=0;i<n;i++)
    {
        p=v[i]+d;
        r=lower_bound(v.begin(),v.end(),p)-v.begin();
        if(r==n||v[r]!=p)
        {
            r--;
        }
        x=r-i;
        s=s+(x*(x-1))/2;
    }
    cout<<s<<endl;
    return 0;
}
