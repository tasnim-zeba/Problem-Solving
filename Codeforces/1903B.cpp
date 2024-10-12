#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll d[n+1][n+1],a[n+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>d[i][j];
            }
        }
        for(i=1;i<=n;i++)
        {
            ll c=d[i][1];
            if(i==1&&n>1)c=d[i][2];
            for(j=1;j<=n;j++)
            {
                if(i==j)continue;
                c=c&d[i][j];
            }
            a[i]=c;
            //cout<<a[i]<<endl;
        }
        if(n==1)
        {
            if(d[1][1]==0)
            {
                cout<<"YES"<<endl;
                cout<<1<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            ll f=1;
            for(i=1;i<=n;i++)
            {
                for(j=i+1;j<=n;j++)
                {
                    if((a[i]|a[j])!=d[i][j])f=0;
                }
            }
            if(f==0)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                for(i=1;i<=n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}

