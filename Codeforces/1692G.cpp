#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int  a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ans=0;
        x=1;
        for(i=0;i<n-1;i++)
        {
            if((a[i+1]*2)>a[i])
            {
                x++;
            }
            else
            {
                ans=ans+max(0,x-k);
                x=1;
            }
        }
        ans=ans+max(0,x-k);
        cout<<ans<<endl;
    }
}
