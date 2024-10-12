#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<ll,ll>mp;
        x=0;
        for(i=n-1;i>=0;i--)
        {
            if(mp[a[i]])
            {
                break;
            }
            mp[a[i]]++;
            x++;
        }
        cout<<n-x<<endl;
    }
}
