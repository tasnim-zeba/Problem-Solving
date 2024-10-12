#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,q,m,i;
    cin>>n;
    vector<ll>v;
    vector<ll>::iterator it;
    while(n--)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>q;
    sort(v.begin(),v.end());
    while(q--)
    {
        cin>>m;
        it=upper_bound(v.begin(),v.end(),m);
        cout<<it-v.begin()<<endl;
    }
    return 0;
}
