#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll n,k,i;
    cin>>n>>k;
    vector<ll>v;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((i*i)!=n)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()>=k)
    {
        cout<<v[k-1]<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
