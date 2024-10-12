#include<bits/stdc++.h>
using namespace std;
int n,m;
void dfs(int i, int j, int x, vector<vector<char>> &a, vector<vector<int>> &vis)
{
    vis[i][j] = x;
    if((i+1)<n && a[i+1][j]=='#' && !vis[i+1][j]){
        dfs(i+1, j, x, a, vis);
    }
    if((j+1)<m && a[i][j+1]=='#' && !vis[i][j+1]){
        dfs(i, j+1, x, a, vis);
    }
    if((i-1)>=0 && a[i-1][j]=='#'&& !vis[i-1][j]){
        dfs(i-1, j, x, a, vis);
    }
    if((j-1)>=0 && a[i][j-1]=='#'&& !vis[i][j-1]){
        dfs(i, j-1, x, a, vis);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<vector<char>> a(n+1, vector<char>(m+1));
        vector<vector<int>> vis(n+1, vector<int>(m+1, 0));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        int x=1;
        //dfs(0,0,x,a,vis);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(vis[i][j]!=0 || a[i][j]=='.')continue;
                dfs(i,j,x,a, vis);
                x++;
            }
        }
        map<int,int>mp;
        mp[0]=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(vis[i][j]){
                    mp[vis[i][j]]++;
                }
                //cout<<vis[i][j]<< "  ";
            }
            //cout<<endl;
        }
        int ans = INT_MIN;
        for(auto c: mp)
        {
            ans = max(ans, c.second);
        }
        for(int i=0; i<n; i++)
        {
            set<int>st;
            int mx = 0;
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='.')mx++;
                st.insert(vis[i][j]);
                if((i+1)<n){
                    st.insert(vis[i+1][j]);
                }

                if((i-1)>=0){
                    st.insert(vis[i-1][j]);
                }

            }
            for(auto c: st)
            {
                mx = mx+ mp[c];
            }
            ans = max(ans, mx);
        }
        for(int j=0; j<m; j++)
        {
            set<int>st;
            int mx = 0;
            for(int i=0; i<n; i++)
            {
                if(a[i][j]=='.')mx++;
                st.insert(vis[i][j]);
                if((j+1)<m){
                    st.insert(vis[i][j+1]);
                }
                if((j-1)>=0){
                    st.insert(vis[i][j-1]);
                }
            }

            for(auto c: st)
            {
                mx = mx+ mp[c];
            }
            ans = max(ans, mx);
        }
        cout<<ans<<endl;
    }
}
