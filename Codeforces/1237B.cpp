#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1],b[n+1],c[n+1],pos[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]--;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        b[i]--;
        pos[b[i]]=i;
    }
    for(i=0;i<n;i++)
    {
        c[i]=pos[a[i]];
    }
    int ans=0,mx=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(c[i]>mx)
        {
            mx=c[i];
        }
        else
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
