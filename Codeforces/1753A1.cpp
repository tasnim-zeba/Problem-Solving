#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n%2)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<pair<ll,ll>>v;
        for(i=0;i<n-1;i=i+2)
        {
            if(a[i]==a[i+1])
            {
                v.push_back({i+1,i+2});
            }
            else
            {
                v.push_back({i+1,i+1});
                v.push_back({i+2,i+2});
            }
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
}
