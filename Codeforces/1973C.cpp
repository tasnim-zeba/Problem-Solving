#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int p[n+1];
        vector<int>v;
        for(int i=1; i<=n; i++)
        {
            cin>>p[i];
            if(i%2)
            {
                v.push_back(p[i]);
            }
        }
        sort(v.rbegin(), v.rend());
       // reverse(v.begin(), v.end());

        map<int,int>mp;
        int x = 1;
        for(int i=0; i<v.size(); i++)
        {
            mp[v[i]] = x;
            x++;
        }
        vector<pair<int,int>>demand;
        demand.push_back({0, p[n]});
        for(int i=2; i<n; i=i+2)
        {
            int de = max(p[i-1]+mp[p[i-1]], p[i+1]+mp[p[i+1]]) - p[i];
            demand.push_back({de, p[i]});
        }
        sort(demand.rbegin(), demand.rend());
        for(int i=n, j=0; j<demand.size(); i--, j++)
        {
            mp[demand[j].second] = i;
        }
        vector<int>ans, ans1;
        for(int i=1; i<=n; i++)
        {
            ans.push_back(mp[p[i]]);
        }
        v.clear();
        mp.clear();
        x=1;
        demand.clear();
        for(int i=2; i<=n; i+=2)
        {
            v.push_back(p[i]);
        }
        sort(v.rbegin(), v.rend());
       // reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            mp[v[i]] = x;
            x++;
        }
        demand.push_back({0, p[1]});
        for(int i=3; i<n; i=i+2)
        {
            int de = max(p[i-1]+mp[p[i-1]], p[i+1]+mp[p[i+1]]) - p[i];
            demand.push_back({de, p[i]});
        }
        sort(demand.rbegin(), demand.rend());
        for(int i=n, j=0; j<demand.size(); i--, j++)
        {
            mp[demand[j].second] = i;
        }
        for(int i=1; i<=n; i++)
        {
            ans1.push_back(mp[p[i]]);
        }
        int c1=0, c2=0;
        for(int i=1; i<ans.size()-1; i++)
        {
            if((ans[i]+p[i+1])>(ans[i-1]+p[i]) && (ans[i]+p[i+1])>(ans[i+1]+p[i+2]))
            {
                c1++;
            }
            if((ans1[i]+p[i+1])>(ans1[i-1]+p[i]) && (ans1[i]+p[i+1])>(ans1[i+1]+p[i+2]))
            {
                c2++;
            }
        }
        if(c1>=c2)
        {
            for(int i=0; i<ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=0; i<ans1.size(); i++)
            {
                cout<<ans1[i]<<" ";
            }
            cout<<endl;
        }
    }
}
