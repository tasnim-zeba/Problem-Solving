#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll m;
        cin>>n>>m;
        int a[n+1];
        ll ans = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]<=m && a[i]>ans)
            {
                ans=a[i];
            }
        }
        sort(a+1, a+n+1);
        ll x = 0;
        for(int i=1,j=1; j<=n; j++)
        {
            while((a[j]-a[i])>1)
            {
                x=x-a[i];
                i++;
            }
            x=x+a[j];
            while(x>m)
            {
                x=x-a[i];
                i++;
            }
            ans = max(ans, x);
        }
        cout<<ans<<endl;
    }
}
