#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>l(n+1),r(n+1);
        for(i=0; i<n; i++)
        {
            cin>>l[i]>>r[i];
        }
        ll low=0,high=1e9+2,k;
        ll ans=1e9+2;
        while(low<=high)
        {
            k=low+(high-low)/2;
            ll preL=0,preR=k;
            int f=1;
            for(i=0; i<n; i++)
            {
                if(i==0)
                {
                    if(preL>r[i]||preR<l[i])
                    {
                        f=0;
                        break;
                    }
                }
                else if(max(0LL,preL-k)>r[i]||preR+k<l[i])
                {
                    f=0;
                    break;
                }
                if(i==0)
                {
                    preL=max(l[i],preL);
                    preL=max(preL,0LL);
                    preR=min(r[i],preR);
                }
                else
                {
                    preL=max(l[i],preL-k);
                    preL=max(preL,0LL);
                    preR=min(r[i],preR+k);
                }
            }
            if(f)
            {
                ans=min(ans,k);
                high=k-1;
            }
            else
            {
                low=k+1;
            }
        }
        cout<<ans<<endl;
    }
}
