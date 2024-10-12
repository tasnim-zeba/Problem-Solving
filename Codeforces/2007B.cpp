#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        ll a[n+1];
        ll mx = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mx = max(mx, a[i]);
        }
        vector<ll>v;
        while(m--){
            char ch;
            cin>>ch;
            ll l,r;
            cin>>l>>r;
            if(ch=='+'){
                if(mx>=l && mx<=r){
                    mx++;
                }
                v.push_back(mx);
            }
            else{
                if(mx>=l && mx<=r){
                    mx--;
                }
                v.push_back(mx);
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

