#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,c,f,n,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ar[n+1];
        ll arr[n+1];
        ll pre[n+1];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]==0)
            {
                arr[i]=2;
            }
            else{
                arr[i]=1;
            }
        }
        pre[0]=arr[0];
        for(i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+arr[i];
        }
        ll ans =0;
        for(i=0;i<n;i++)
        {
            for(j=0;(i+j)<n;j++)
            {
                if(j==0)
                {
                    ans=ans+pre[i+j];
                }
                else{
                    ans=ans+pre[i+j]-pre[j-1];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

