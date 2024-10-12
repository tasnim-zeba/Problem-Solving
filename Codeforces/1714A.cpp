#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,h,m,ti,ans,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>h>>m;
        ans=INT_MAX;
        while(n--)
        {
            cin>>x>>y;
            ti=(-60*h-m+(60*x+y))%1440;
            ti+=1440;
            ti%=1440;
            ans=min(ti,ans);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }
}
