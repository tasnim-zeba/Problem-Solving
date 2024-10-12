#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int,int> &a, pair<int,int> &b)
{
    if(a.first!=b.first)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<pair<int,int>>v;
        vector<pair<int,int>>a;
        for(int i=0; i<k; i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
            a.push_back({x,y});
        }
        sort(v.begin(), v.end());
        int mn[k+1];
        for(int i=k-1; i>=0; i--)
        {
            if(i==(k-1))
            {
                mn[k-1] = v[i].second;
            }
            else{
                mn[i] = min(v[i].second, mn[i+1]);
            }
        }
        map<pair<int,int>,int>mp;
        //cout<<"HJK"<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            if(i==0){
                /*if(v[0].first!=1 || (v[0].first==1 && v[0].second==1))
                {
                    mp[v[i]]=1;
                }
                else*/ if(mn[1]<=v[0].second)
                {
                    mp[v[i]]=0;
                }
                else{
                    mp[v[i]]=1;
                }
            }
            else if(v[i-1].first==v[i].first){
                mp[v[i]]=0;
            }
            else if(i==(k-1))
            {
                mp[v[i]]=1;
                //cout<<v[i].first<<"hggk "<<v[i].second<<endl;
            }
            else{
                if(mn[i+1]<=v[i].second)
                {
                    mp[v[i]]=0;
                }
                else{
                    mp[v[i]]=1;
                }
            }
        }
        ll ans = 0;
        ans = ans + v[0].first *(mn[0]-1LL);
        for(int i=1; i<v.size(); i++)
        {
            if(v[i].first == v[i-1].first)
            {
                continue;
            }
            ans = ans + (v[i].first-v[i-1].first)*(mn[i]-1LL);
        }
        ans =ans + (n-v[v.size()-1].first)*m;
        cout<<ans<<endl;
        for(int i=0; i<a.size(); i++)
        {
            cout<<mp[a[i]]<<" ";
        }
        cout<<endl;
    }
}
