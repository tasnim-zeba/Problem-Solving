#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
   // fio
    ll t,n,k,i,j,r,mn,x,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],p[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        p[1]=a[1];
        for(i=2;i<=n;i++)
        {
            p[i]=p[i-1]+a[i];
        }
        mn=n;
        ll o=2;
        for(i=1;i<=n;i++)
        {
            o=2;
            l=o*p[i];
            x=i;
            k=i;
            for(j=i+1;j<=n;j++)
            {
                if(l==p[j])
                {
                    l=l/o;
                    o++;
                    l=o*l;
                    x=max(x,j-k);
                    k=j;
                }
                else if(j==n)
                {
                    x=INT_MAX;
                }
            }
            mn=min(mn,x);
        }
        cout<<mn<<endl;
    }
}

