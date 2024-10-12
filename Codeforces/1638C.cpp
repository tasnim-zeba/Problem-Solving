#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,mx,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c=1,mx=a[0],ans=1;
        for(i=1;i<n;i++)
        {
            if(a[i]>mx)
            {
                if(mx>c);
                else{
                    ans++;
                }
                mx=a[i];
            }
            c++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
