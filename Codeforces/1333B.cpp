#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,l,r,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        c=l=r=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<b[i]&&l==0)
            {
                c=1;
                break;
            }
            else if(a[i]>b[i]&&r==0)
            {
                c=1;
                break;
            }
            if(a[i]==-1)
            {
                r=1;
            }
            if(a[i]==1)
            {
                l=1;
            }
        }
        if(c)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
