
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,r,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                l=i+1;
                c++;
                break;
            }
        }
        for(i=n-1;i>0;i--)
        {
            if(a[i]==a[i-1])
            {
                r=i-1;
                c++;
                break;
            }
        }
        if(c==0||(r-l)<0)
        {
            cout<<0<<endl;
        }
        else
        {
            if((r-l)<1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<r-l<<endl;
            }
        }
    }
    return 0;
}
