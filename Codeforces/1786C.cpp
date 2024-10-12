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
        sort(a,a+n);
        ll s=0;
        s=s+(a[0]-1);
        a[0]=1;
        for(i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])>1)
            {
                s=s+(a[i+1]-a[i]-1);
                a[i+1]=a[i]+1;
            }
        }
        cout<<s<<endl;
    }
}
