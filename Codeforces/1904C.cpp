#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,k,i,j;
    ll x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll>a(n);
        ll ans = LLONG_MAX;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            ans=min(ans,a[i]);
        }
        sort(a.begin(),a.end());
        if(k>=3)
        {
            cout<<0<<endl;
        }
        else if(k==2)
        {
            for(i=0; i<n-1; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    ll diff = a[j] - a[i];
                    ans=min(ans,diff);
                    auto it = upper_bound(a.begin(),a.end(),diff);
                    if(it==a.end())
                    {
                        ans=min(ans,diff-a[n-1]);
                    }
                    else
                    {
                        int indx = it - a.begin();
                        ans = min(ans,a[indx]-diff);
                        if(indx)
                        {
                            ans=min(ans,diff-a[indx-1]);
                        }
                    }
                }
            }
            cout<<ans<<endl;
        }
        else if(k==1)
        {
            for(i=0; i<n-1; i++)
            {
                for(j=i+1; j<n; j++)
                {
                    ll diff = a[i+1] - a[i];
                    ans=min(ans,diff);
                }
            }
            cout<<ans<<endl;
        }
    }
}

