#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                f=1;
            }
        }
        if(f==0||n==1)
        {
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            ll x;
        if(a[0]!=1)
        {
            m=1;
            j=0;
        }
        else{
            i=0;
        while(a[i]==(i+1))
        {
            i++;
        }
        m=a[i-1]+1;
        j=i;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==m)
            {
                x=i;
            }
        }
        for(i=0;i<j;i++)
        {
            cout<<a[i]<<" ";
        }
        for(i=x;i>=j;i--)
        {
            cout<<a[i]<<" ";
        }
        for(i=x+1;i<n;i++)
        {
             cout<<a[i]<<" ";
        }
        cout<<endl;
        }

    }
    return 0;
}
