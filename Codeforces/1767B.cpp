#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll x;
        vector<ll>v;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(i==0)
            {
                b=x;
            }
            else if(x>b)
            {
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(v[i]<=b)continue;
            ll k=(v[i]-b+1)/2;
            b=b+k;
        }
        cout<<b<<endl;
    }
}

