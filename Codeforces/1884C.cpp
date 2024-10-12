#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(int makeZero, int sz, vector<pair<int,int>> &v)
{
    vector<int>pre(sz, 0);
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].first<=makeZero && makeZero<=v[i].second)continue;
        pre[v[i].first]++;
        pre[v[i].second+1]--;
    }
    int mx = 0;
    for(int i=1; i<sz; i++)
    {
        pre[i]=pre[i-1]+pre[i];
        mx = max(mx,pre[i]);
    }
    return mx;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>v;
        map<int,int>mp;
        set<int>st;
        st.insert(1);
        st.insert(m);
        for(int i=1; i<=n; i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x, y});
            st.insert(x);
            st.insert(y);
        }
        int c=1;
        for(auto ch: st)
        {
            mp[ch]=c;
            c++;
        }
        for(int i=0; i<v.size(); i++)
        {
            v[i].first=mp[v[i].first];//compression cz 1e9 cannot store in a vector
            v[i].second=mp[v[i].second];
        }
        int ans1 = solve(1, c+2, v); // for 1 compressed value is 1, size is taking c+2 to avoid runtime error, actual size is c-1
        int ans2 = solve(c-1, c+2, v);// for m compressed value is c-1
        cout<<max(ans1, ans2)<<endl;
    }
}

