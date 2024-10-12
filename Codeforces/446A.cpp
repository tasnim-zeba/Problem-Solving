#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ans;
    cin>>n;
    int a[n+1],la[n+1],ri[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        la[i]=ri[i]=1;
    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]>a[i-1])
        {
            la[i]=la[i-1]+1;
        }
    }
    for(i=n-1;i>=1;i--)
    {
        if(a[i]<a[i+1])
        {
            ri[i]=ri[i+1]+1;
        }
    }
    ans=0;
    for(i=1;i<=n;i++)
    {
        ///cout<<la[i]<<" "<<ri[i]<<endl;
        if((i-1)>=1&&(i+1)<=n)
        {
            if(a[i-1]+1<a[i+1])
            {
                ans=max(ans,la[i-1]+ri[i+1]+1);
            }
            else
            {
                ans=max(ans,la[i-1]+1);
                ans=max(ans,ri[i+1]+1);
            }
        }
        else if(i==1)
        {
            ans=max(ans,ri[2]+1);
        }
        else if(i==n)
        {
            ans=max(ans,la[i-1]+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
