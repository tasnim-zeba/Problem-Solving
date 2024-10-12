#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,y,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<ll,ll>>v1,v2;
        for(i=2;i<=n;i++)
        {
            cout<<"? "<<1<<" "<<i<<endl;
            cin>>a;
            v1.push_back({a,i});
        }
        cout<<"? "<<1<<" "<<2<<endl;
        cin>>a;
        for(i=3;i<=n;i++)
        {
            cout<<"? "<<2<<" "<<i<<endl;
            cin>>a;
            v2.push_back({a,i});
        }
        sort(v1.begin(),v1.end());
        for(i=0;i<v1.size()-1;i++)
        {
            if(v1[i].first==v1[i+1].first)
            {
                cout<<"! "<<v1[i].second<<" "<<v1[i+1].second<<endl;
                continue;
            }
        }
        sort(v2.begin(),v2.end());
        for(i=0;i<v2.size()-1;i++)
        {
            if(v2[i].first==v2[i+1].first)
            {
                cout<<"! "<<v2[i].second<<" "<<v2[i+1].second<<endl;
                continue;
            }
        }
    }
}


