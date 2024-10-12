#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x;
    ///cout<<log2(1000000000)<<endl;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        vector<ll>v;
        vector<ll>res;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=n&&find(v.begin(),v.end(),a[i])==v.end())
            {
                v.push_back(a[i]);
            }
            else{
                res.push_back(a[i]);
            }
        }
        for(i=0;i<res.size();i++)
        {
            x=res[i];
            while(x>n)
            {
                x=x/2;
            }
            while(find(v.begin(),v.end(),x)!=v.end())
            {
                x=x/2;
            }
            if(x>0)
            {
                v.push_back(x);
            }

        }
        if(v.size()==n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
