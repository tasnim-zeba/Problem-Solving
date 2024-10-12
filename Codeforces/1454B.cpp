#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];
int main()
{
    ll n,i,x,c,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
    map<ll,ll>m;
    map<ll,ll>:: iterator it;
    for(i=1;i<=n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    c=0;
    for(it=m.begin();it!=m.end();it++){
        ///cout<<it->first<<" "<<it->second<<endl;
        if(it->second==1)
        {
            c=1;
            x=it->first;
            break;
        }
    }
    if(c==0)
    {
        cout<<-1<<endl;
    }
    else{
        for(i=1;i<=n;i++){
            if(a[i]==x)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    }
    return 0;
}
