#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll>v;
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
        x=1;
        for(i=v.size()-1;i>=0;i--)
        {
            //cout<<v[i]<<" ";
            if(v[i]<=k)
            {
                x=v[i];
                break;
            }
        }
        cout<<n/x<<endl;
    }
}
