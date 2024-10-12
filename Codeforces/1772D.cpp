#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,s,m,l,r,x,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        x=-1;
        l=0,r=1e9;
        while(l<=r)
        {
            m=(l+r)/2;
            f=0;
            for(i=0;i<n-1;i++)
            {
                if(abs(a[i]-m)>abs(a[i+1]-m))
                {
                    if(a[i]>a[i+1])
                    {
                        f=1;
                    }
                    else
                    {
                        f=2;
                    }
                    break;
                }
            }
            if(f==1)
            {
                l=m+1;
            }
            else if(f==2)
            {
                r=m-1;
            }
            else
            {
                x=m;
                break;
            }
        }
        cout<<x<<endl;
    }
}

