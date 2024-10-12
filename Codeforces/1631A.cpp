#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,ans,x;

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
        for(i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                swap(a[i],b[i]);
            }
        }
        ans=(*max_element(a,a+n))*(*max_element(b,b+n));
        cout<<ans<<endl;
    }
    return 0;
}
