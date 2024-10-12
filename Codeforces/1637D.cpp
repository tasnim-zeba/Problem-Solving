#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll a[],ll n)
{
    ll s=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            s+=(a[i]+a[j])*(a[i]+a[j]);
        }
    }
    return s;
}
int main()
{
    ll t,n,i,j,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        if(a[0]>b[0])
        {
            swap(a[0],b[0]);
        }
        ll pa=a[0],pb=b[0];
        for(i=1; i<n; i++)
        {
            if(pa<pb)
            {
                if(a[i]<b[i])
                {
                    swap(a[i],b[i]);
                }
                pa=pa+a[i];
                pb=pb+b[i];
            }
            else if(pa>pb)
            {
                if(a[i]>b[i])
                {
                    swap(a[i],b[i]);
                }
                pa=pa+a[i];
                pb=pb+b[i];
            }
            else
            {
                if(a[i]>b[i])
                {
                    swap(a[i],b[i]);
                }
                pa=pa+a[i];
                pb=pb+b[i];
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
        cout<<func(a,n)+func(b,n)<<endl;
    }
}
