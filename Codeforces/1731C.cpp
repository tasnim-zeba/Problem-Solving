#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    ///fio
    ll t,n,i,j,ans,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll xr=0;
        ans=0;
        vector<ll>suba(2*n+1,0);
        suba[0]=1;
        for(i=0;i<n;i++)
        {
            xr=xr^a[i];
            for(j=0; ;j++)
            {
                k=j*j;
                if(k>2*n)break;
                if((k^xr)<=2*n)
                {
                    ans=ans+suba[k^xr];
                }
            }
            suba[xr]++;
        }
        ans=((n*(n+1))/2LL)-ans;
        cout<<ans<<endl;
    }

}
