#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,n,i,k,j,c,s,j1;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1];
        c=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                c=1;
            }
        }
        sort(a,a+n);
        j=-1;
        for(i=0; i<n; i++)
        {
            if(a[i]>=0)
            {
                j=i;
                j1=i-1;
                break;
            }
        }
        s=0;
        if(j!=-1)
        {
            for(i=n-1; i>=j; i=i-k)
            {
                s=s+2*(a[i]);
            }
        }
        if(c==1)
        {
            for(i=0; i<=j1; i=i+k)
            {
                s=s+2*abs(a[i]);
            }
        }

        s=s-max(a[n-1],(0-a[0]));
        cout<<s<<endl;
    }
}
