#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,ans,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        c=ans=0;
        k=1;
        for(i=1;i<=n;i++)
        {
            c=0;
            k=1;
            while(a[i]>=k)
            {
                c++;
                i++;
                k++;
                if(i>n)break;
            }
            i--;
            ans=ans+(c*(c+1))/2;
        }
        cout<<ans<<endl;
    }
}
