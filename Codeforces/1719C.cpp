#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q,i,j,k,e;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int a[n+1],f[n+1];
        bool b[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            f[i]=0;
        }
        int mx=INT_MIN;
        e=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]>mx)
            {
                mx=a[i];
                e=i;
                b[i]=true;
            }
            else
            {
                f[e]++;
                b[i]=false;
            }
        }
        while(q--)
        {
            cin>>j>>k;
            if(j==1&&a[j]==n)
            {
                cout<<k<<endl;
                continue;
            }
            if(a[j]==n)
            {
                cout<<max(0,k-(j-2))<<endl;
                continue;
            }
            if(j==1)
            {
                cout<<min(k,f[j])<<endl;
                continue;
            }
            if(b[j])
            {
                long long ans=0;
                if(k>=(j-1))
                {
                     cout<<min(k-(j-2),f[j]+1)<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            else
            {
                cout<<0<<endl;
            }
        }

    }
}
