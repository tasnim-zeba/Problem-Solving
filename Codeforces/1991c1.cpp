#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        vector<ll>v;
        for(int k=1; k<=40; k++)
        {
            ll s = 0, x= 0;
            for(int i=1; i<=n; i++)
            {
                s=s+a[i];
            }
            for(int i=1; i<=n; i++)
            {
                a[i] = abs(a[i]-s);
            }
            v.push_back(s);
        }
        ll s = 0;
        for(int i=1; i<=n; i++)
        {
            s=s+a[i];
        }
        if(s!=0)
        {
            cout<<-1<<endl;
        }
        else{
            cout<<v.size()<<endl;
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}


