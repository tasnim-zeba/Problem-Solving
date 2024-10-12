#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t[100005][10],n;
ll solve(ll a[100005],ll i,ll k,ll z)
{
    if(i<0||k==0||i>n-1)return 0;
    if(t[i][z]!=-1)return t[i][z];
    long long mx=0;
    if(i<n){
        mx=max(mx,a[i]+solve(a,i+1,k-1,z));
    }
    if(i>=0&&z>0){
        mx=max(mx,a[i]+solve(a,i-1,k-1,z-1));
    }
    return t[i][z]=mx;
}
int main()
{
    ll e,k,z,ans,i,a[100005];
    scanf("%lld",&e);
    while(e--)
    {
        scanf("%lld %lld %lld",&n,&k,&z);
        for(i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        memset(t,-1,sizeof(t));
        ans=a[0]+solve(a,1,k,z);
        printf("%lld\n",ans);
    }
    return 0;
}
