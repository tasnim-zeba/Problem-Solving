#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,p,c,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector< pair<ll,ll> >v;
        vector< pair<ll,ll> >:: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>p>>c;
            v.push_back({p,c});
        }
        if((v[0].first<v[0].second))
        {
            cout<<"NO"<<endl;
            continue;
        }
        f=1;
        for(i=1;i<n;i++)
        {
            if((v[i].first<v[i-1].first)||(v[i].second<v[i-1].second)||(v[i].first<v[i].second)||((v[i].first-v[i-1].first)<(v[i].second-v[i-1].second)))
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
