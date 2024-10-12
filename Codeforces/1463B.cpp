#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,es,os,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        es=0,os=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(i%2==0)
            {
                es=es+a[i]-1;
            }
            else
            {
                os=os+a[i]-1;
            }
        }

        for(i=0; i<n; i++)
        {
            if(es<=os)
            {
                if(i%2==0)
                {
                    b[i]=1;
                }
                else
                {
                    b[i]=a[i];
                }
            }
            else
            {
                if(i%2==0)
                {
                    b[i]=a[i];
                }
                else
                {
                    b[i]=1;
                }
            }
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}
