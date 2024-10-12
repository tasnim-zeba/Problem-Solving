#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n= s.size();
        map<int,vector<int>>mp;
        mp[0].push_back(-1);
        int x = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                x++;
            }
            else{
                x--;
            }
            mp[x].push_back(i);
        }
        /*for(auto va: mp)
        {
            if(va.second.size()==1)
            {
                auto it = mp.find(va.first);
                mp.erase(it);
            }
        }
        if(mp.size()==0)
        {
            cout<<0<<endl;
            continue;
        }*/
        int ans = 0;
        for(auto va: mp)
        {
            vector<int>&v1 = va.second;
            if(v1.size()<=1)continue;
            int sz = v1.size();
            vector<ll>pre(sz);
            pre[0] = v1[0]+2;
            for(int i=1; i<v1.size(); i++)
            {
                pre[i] = pre[i-1] + v1[i] +2;
            }
            for(int i=v1.size()-1; i>=1; i--)
            {
                ans = (ans + ((n-v1[i])*pre[i-1])%M)%M;
            }
        }
        cout<<ans<<endl;
    }
}
