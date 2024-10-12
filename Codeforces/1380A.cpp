#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],pre[n+1],post[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        pre[1]=a[1];
        for(i=2;i<=n;i++)
        {
            pre[i]=min(pre[i-1],a[i]);
        }
        post[n]=a[n];
        for(i=n-1;i>=1;i--)
        {
            post[i]=min(post[i+1],a[i]);
        }
        j=0;
        for(i=2;i<n;i++)
        {
            if(pre[i]<a[i]&&post[i]<a[i])
            {
                b=pre[i];
                c=a[i];
                d=post[i];
                j=1;
                break;
            }
        }
        if(j)
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n;i++)
            {
                if(a[i]==b||a[i]==c||a[i]==d)
                {
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

