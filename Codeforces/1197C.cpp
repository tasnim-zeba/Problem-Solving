#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const N=300005;
ll a[N];
vector<ll>v2,v1;
int main()
{
    ll n,i,k,j,mn;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=2;i<=n;i++)
    {
        v1.push_back(a[i]-a[i-1]);
    }
    sort(v1.rbegin(),v1.rend());
    mn=a[n]-a[1];
    for(i=0;i<k-1;i++)
    {
        mn=mn-v1[i];
    }
    cout<<mn<<endl;
}
