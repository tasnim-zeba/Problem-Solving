#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        map<int, vector<pair<int,int>>>mp;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            mp[a[i]/4].push_back({a[i],i});
        }
        for(auto ch:mp)
        {
            vector<pair<int,int>>v = ch.second;
            multiset<int>valu;
            for(int i=0; i<v.size(); i++)
            {
                valu.insert(v[i].first);
            }
            auto it = valu.begin();
            for(int i=0; i<v.size(); i++)
            {
                a[v[i].second] = *it;
                it++;
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
