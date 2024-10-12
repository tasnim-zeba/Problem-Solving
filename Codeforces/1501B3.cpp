#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll c=0;
        vector<ll>v;
        for(i=n-1;i>=0;i--)
        {
            c=max(c,a[i]);
            if(c>0)
            {
                v.push_back(1);
                c--;
            }
            else
            {
                v.push_back(0);
            }
        }
        reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
