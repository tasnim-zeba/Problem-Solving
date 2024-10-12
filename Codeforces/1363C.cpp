#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,u,v,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        map<ll,ll>mp;
        for(i=1;i<n;i++)
        {
            cin>>u>>v;
            mp[u]++;
            mp[v]++;
        }
        if(mp[x]<2)
        {
            cout<<"Ayush"<<endl;
        }
        else if(n%2==1)
        {
            cout<<"Ashish"<<endl;
        }
        else
        {
            cout<<"Ayush"<<endl;
        }
    }
}
