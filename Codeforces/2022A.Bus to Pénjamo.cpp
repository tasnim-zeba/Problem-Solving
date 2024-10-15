#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>n>>r;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int ans = 0;
        int ext=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2==0)
            {
                ans=ans+a[i];
                r = r -(a[i]/2);
            }
            else{
                ans =ans + a[i]-1;
                r=r-(a[i]/2);
                ext++;
            }
        }
        if(ext<=r)
        {
            ans = ans+ext;
        }
        else if((ext/r)==1)
        {
            int m =ext%r;
            ans = ans+(r-m);
        }
        cout<<ans<<endl;
    }
}
