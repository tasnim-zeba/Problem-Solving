#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int M = 998244353;
int powm(int b, int p)
{
    int res = 1;
    while(p)
    {
        if(p&1)
        {
            res  = ((ll)res* (ll)b)%M;
            p--;
        }
        else
        {
            b = ((ll)b* (ll)b)%M;
            p = p/2;
        }
    }
    return res;
}
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1], cnt[n+1];
        ll pre[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        pre[0]=a[0];
        for(i=1; i<n; i++)
        {
            pre[i] = pre[i-1] + a[i];
        }
        cnt[0] = (pre[0]<0LL);
        //cout<<cnt[0]<<" ";
        for(i=1; i<n; i++)
        {
            cnt[i] = cnt[i-1] + (pre[i]<0LL);
            //cout<<cnt[i]<<" ";
        }
        ll mn = *min_element(pre, pre+n);
        if(mn>=0LL)
        {
            cout<<powm(2, n)<<endl;
            continue;
        }
        int ans =0;
        for(i=0; i<n; i++)
        {
            if(pre[i]==mn)
            {
                ans= (ans+ powm(2, n - cnt[i]))%M;
            }
        }
        cout<<ans<<endl;
    }
}
