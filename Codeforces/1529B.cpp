#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
int main()
{
    ll t,n,i,c,mn,mn1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        vector<ll>v;
        mn=LONG_MAX;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0)
            {
                c++;
                v.push_back(a[i]);
            }
            else{
                mn=min(mn,a[i]);
            }
        }
        mn1=LONG_MAX;
        if(v.size()>0)
        {
            sort(v.begin(),v.end());
        for(i=0;i<v.size()-1;i++)
        {
            mn1=min(mn1,(v[i+1]-v[i]));
        }
        if(mn1>=mn)
        {
            c++;
        }
        cout<<c<<endl;
        }else{
        cout<<1<<endl;
        }
    }
    return 0;
}
