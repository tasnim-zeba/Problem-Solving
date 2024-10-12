#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>g[n];
        string s(n-1, '1');
        while(m--){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
        }
        vector<int>time(n+1,1e9);
        time[1] = 0;
        int u = 2;
        for(int v=1; v<n; )
        {
            time[v] = min(time[v-1]+1, time[v]);
            for(auto child: g[v])
            {
                time[child] = min(time[child], time[v]+1);
                while(u<child-time[child])
                {
                    s[u-1]='0';
                    u++;
                }
            }
            v++;
            u=max(u,v+1);
        }
        cout<<s<<endl;
    }
}
