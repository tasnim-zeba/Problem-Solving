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
        vector<ll> a;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        ll s=0;
        for(i=0;i<n;i++)
        {
            ll x=a[i]+2;
            j=upper_bound(a.begin(),a.end(),x)-a.begin();
            j--;
            if((j-i)>=2)
            {
                 s=s+((j-i)*(j-i-1))/2;
            }
        }
        cout<<s<<endl;
    }
}
