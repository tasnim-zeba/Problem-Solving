#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1],f[n+1],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        f[i]=0;
    }
    int ans=0;
    for(i=n-1;i>=0;i--)
    {
        if(i<n-1&&a[i+1])
        {
            a[i+1]--;
        }
        else if(i>0&&a[i-1]&&a[i]==0)
        {
            a[i-1]--;
        }
        else
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
