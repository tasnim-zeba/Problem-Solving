#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==3)
        {
            cout<<2<<" "<<1<<" "<<3<<endl;
            continue;
        }
        x=n/2;
        ll a[n+1];
        if(n%2==0&&x%2==0)
        {
            ll p=1;
            for(i=1;i<=n;i=i+2)
            {
                a[i]=p;
                p++;
            }
            m=(ll)log2(p-1)+1;
            p=1;
            for(i=2;i<=n;i=i+2)
            {
                ll k=(1<<m)|p;
                a[i]=k;
                p++;
            }
        }
        else if(n%2==0&&x%2)
        {
            ll p=1;
            for(i=1;i<=n;i=i+2)
            {
                a[i]=p;
                p++;
            }
            m=(ll)log2(p-1)+1;
            p=1;
            for(i=2;i<=n;i=i+2)
            {
                ll k=(1<<m)|p;
                if((i+2)>n)a[i]=p;
                else
                a[i]=k;
                p++;
            }
            m++;
            a[1]=(1<<m)|a[1];
            a[n]=(1<<m)|a[n];
        }
        else if(n%2&&x%2==0)
        {
            ll p=1;
            for(i=2;i<=n;i=i+2)
            {
                a[i]=p;
                p++;
            }
            m=(ll)log2(p-1)+1;
            p=1;
            for(i=1;i<=n-1;i=i+2)
            {
                ll k=(1<<m)|p;
                a[i]=k;
                p++;
            }
            m=(ll)log2(a[n-2])+1;
            a[n]=(1<<m)|0;
            a[n-1]=(1<<m)|a[n-1];
        }
        else if(n%2&&x%2)
        {
            ll p=1;
            for(i=1;i<=n;i=i+2)
            {
                a[i]=p;
                p++;
            }
            m=(ll)log2(p-1)+1;
            p=1;
            for(i=2;i<n;i=i+2)
            {
                ll k=(1<<m)|p;
                if((i+2)>n)a[i]=p;
                else
                a[i]=k;
                p++;
            }
            m++;
            a[1]=(1<<m)|a[1];
            a[n-2]=(1<<m)|a[n-2];
            a[n]=0;
        }
        ll c1=0,c2=0;
        for(i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
            if(i%2)
            {
                c1=c1^a[i];
            }
            else
            {
                c2=c2^a[i];
            }
        }
        cout<<endl;
        ///cout<<c1<<" "<<c2<<endl;
    }
}
