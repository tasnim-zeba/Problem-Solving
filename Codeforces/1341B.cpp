#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,c,mx,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
       f=1;
        c=0;
        for(i=2;i<k;i++)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            {
                c++;
            }
        }
        mx=c;
        for(i=k+1;i<=n;i++)
        {
            if(a[i-k+1]>a[i-k]&&a[i-k+1]>a[i-k+2])
            {
                c--;
            }
            if(a[i-1]>a[i-2]&&a[i-1]>a[i])
            {
                c++;
            }
            if(c>mx)
            {
                mx=c;
                f=i-k+1;
            }
        }
        cout<<mx+1<<" "<<f<<endl;
    }
    return 0;
}
