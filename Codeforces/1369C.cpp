#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        ll w[k+1],w1[k+1];
        for(i=0; i<k; i++)
        {
            cin>>w[i];
            w1[i]=w[i];
        }
        sort(w,w+k);
        sort(w1,w1+k);
        j=0;
        ll ans=0;
        for(i=0; i<k; i++)
        {
            if(w[i]>0)
            {
                ans+=a[j];
                if(w[i]==1)
                {
                    ans+=a[j];
                }
                j++;
                w[i]--;
            }

        }
        for(i=0; i<k; i++)
        {
            while(w[i]>0)
            {
                if(w[i]==1)
                {
                    ans=ans+a[j];
                }
                j++;
                w[i]--;
            }
        }

        cout<<ans<<endl;
    }
}

