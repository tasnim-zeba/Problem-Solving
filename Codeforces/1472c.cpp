#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=n-1;i>=0;i--)
        {
            j=(a[i]+i);
            if(j<=n-1)
            {
                a[i]=a[i]+a[j];
            }
        }
        cout<<*max_element(a,a+n)<<endl;
    }
    return 0;
}
