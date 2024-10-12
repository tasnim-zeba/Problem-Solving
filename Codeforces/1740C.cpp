#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=abs(a[n-1]-a[0])+max(abs(a[n-1]-a[n-2]),abs(a[0]-a[1]));
        for(i=2;i<n;i++)
        {
            ans=max(ans,abs(a[0]-a[i])+abs(a[i]-a[i-1]));
        }
        for(i=0;i+2<n;i++)
        {
            ans=max(ans,abs(a[i+1]-a[i])+abs(a[i]-a[n-1]));
        }
        cout<<ans<<endl;
    }
}
