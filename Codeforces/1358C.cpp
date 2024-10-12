#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll c=0,f=0;
        for(i=n-1;i>0;i--)
        {
            f++;
            if(a[i]>a[i-1])
            {
                c=-1;
            }
            if(c==-1)
            {
                 if(a[i]<a[i-1])
                    {
                        break;
                    }
            }
            if(i==1)
            {
                f++;
            }
        }
        if(c==-1)
        {
            cout<<n-f<<endl;
        }
        else
        {
            ///cout<<f<<endl;
           ll c=0,f1=0;
        for(i=n-1;i>0;i--)
        {
            f1++;
            if(a[i]>a[i-1])
            {
                c=1;
            }
            if(c==1)
            {
                if(a[i]<a[i-1])
            {
                break;
            }
            }
            if(i==1)
            {
                f1++;
            }
        }
        ///cout<<f1<<endl;
        c=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                c=1;
            }
        }
        if(c==0)
        {
            f1=n;
        }
        ///cout<<f1<<endl;
        cout<<n-f1<<endl;
        }
    }
    return 0;
}
