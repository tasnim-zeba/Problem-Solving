#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,i,j,k;
    char c;
    cin>>t;
    map<ll,bool>vis;
    map<ll,ll>mex;
    while(t--)
    {
        cin>>c;
        cin>>k;
        if(c=='+')
        {
            vis[k]=true;
        }
        else
        {
            ll x=mex[k]+k;
            while(vis[x])
            {
                mex[k]=x;
                x=x+k;
            }
            cout<<x<<endl;
        }
    }
}
