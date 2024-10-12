#include <bits/stdc++.h>
using namespace std;
const int N = (int) 2e5+5;
vector<int> g[N];
vector<int> vis(N);
bool cy;
void DFS(int curr,int par)
{
    vis[curr]=1;
    for(auto i:g[curr])
    {
        if(i==par)continue;
        if(vis[i]==0)
        {
            DFS(i,curr);
        }
        else if(vis[i]==1)
        {
            cy=true;
        }
    }
    vis[curr]=2;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<=n; i++)
        {
            g[i].clear();
            vis[i]=0;
        }
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            g[i].push_back(x);
            g[x].push_back(i);
        }
        int l=0,gr=0;
        for(int i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                cy=false;
                DFS(i,-1);
                if(cy)
                {
                    l++;
                }
                else
                {
                    gr++;
                }
            }
        }
        if(gr)
        {
            cout<<l+1<<" "<<l+gr<<endl;
        }
        else
        {
            cout<<l<<" "<<l<<endl;
        }


    }
    return 0;
}


