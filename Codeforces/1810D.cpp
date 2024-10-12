#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,q,e,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>q;
        ll r=1e18,l=INT_MIN;
        vector<ll>v;
        while(q--)
        {
            cin>>e;
            if(e==1)
            {
                cin>>a>>b>>n;
                ll mx,mn;
                if(n==1)
                {
                    mn=1;
                    mx=a;
                }
                else
                {
                    mx=(n-1)*(a-b)+a;
                 mn=(n-2)*(a-b)+a+1;
                }
                if(mn>r||mx<l)
                {
                    v.push_back(0);
                }
                else
                {
                     v.push_back(1);
                    l=max(l,mn);
                    r=min(r,mx);
                }
            }
            else
            {
                cin>>a>>b;
                ll n1,n2;
                n1=((l-b-1)/(a-b))+1;
                n2=((r-b-1)/(a-b))+1;
                if(a>=r)
                    v.push_back(1);
                else if(n1==n2)
                     v.push_back(n1);
                else
                     v.push_back(-1);
            }
        }
        for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
    }
}
