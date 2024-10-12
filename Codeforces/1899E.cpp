#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],mn = INT_MAX;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        int ans=0,f=0;
        for(i=1;i<=n;i++)
        {
            if(f==1)
            {
                if(a[i]<a[i-1])
                {
                    ans=-1;
                    break;
                }
                continue;
            }
            if(a[i]==mn)
            {
                f=1;
            }
            else
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
