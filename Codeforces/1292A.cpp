#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,q,o,r,c,mi1,mi2;
    cin>>n>>q;
    map<pair<ll,ll>,ll>mp;
    o=0;
    mi1=mi2=0;
    while(q--)
    {
        cin>>r>>c;
        r--;
        for(i=-1; i<=1; i++)
        {
            if(mp[ {r^1,c+i}])
            {
                o=o+(mp[ {r,c}]?-1:1);
            }
        }
        mp[{r,c}]^=1;
        if(o==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
