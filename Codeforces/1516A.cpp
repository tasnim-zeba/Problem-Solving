#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[102];
int main()
{
    ll t,n,k,i,c,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        c=k;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>=c)
            {
                a[i]=a[i]-c;
                a[n-1]=a[n-1]+c;
                break;
            }else if(a[i]<c)
            {
                a[n-1]=a[n-1]+a[i];
                c=c-a[i];
                a[i]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
