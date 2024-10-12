#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1001][1001], pre[1001][1001];
int main()
{
    ll t,n,q,i,j,h,w,hs,ws,hb,wb;
    cin>>t;
    while(t--){
        cin>>n>>q;

        for(i=0; i<=1000; i++)
        {
            for(j=0; j<=1000; j++)
            {
                a[i][j] = 0;
                pre[i][j] =0;
            }
        }
        for(i=1; i<=n; i++)
        {
            cin>>h>>w;
            a[h][w]+=(h*w);
        }
        for(i=1; i<=1000; i++)
        {
            for(j=1; j<=1000; j++)
            {
                pre[i][j] = a[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
            }
        }
        while(q--)
        {
            cin>>hs>>ws>>hb>>wb;
            ll ans = pre[hb-1][wb-1] - pre[hs][wb-1] - pre[hb-1][ws] + pre[hs][ws];
            cout<<ans<<endl;
        }
    }
}
