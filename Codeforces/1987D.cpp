#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&a, pair<int,int>&b)
{
    if(a.first == b.first)
    {
        return a.second>b.second;
    }
    return a.first<b.first;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), cmp);
        /*for(int i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }*/
        int ans = 0;
        for(int i=1; ; i++)
        {
            if(i%2)
            {
                if(mp.size()==0)break;
                auto it = mp.begin();
                int x = it->first;
                int y = it->second;
                int indx;
                for(int i=0; i<v.size(); i++)
                {
                    if(v[i].second==x)
                    {
                        indx = i;
                        break;
                    }
                }
                v.erase(v.begin()+indx);
                mp.erase(it);
                ans++;
            }
            else{
                if(v.size()==0)continue;
                int fr = v[0].first;
                int va = v[0].second;
                fr--;
                v[0].first--;
                if(fr==0)
                {
                    v.erase(v.begin());
                    auto it = mp.find(va);
                    mp.erase(it);
                }
            }
        }
        cout<<ans<<endl;
    }
}
