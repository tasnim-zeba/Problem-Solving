#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[502][502];
int main()
{
    int n,i;
    cin>>n;
    int r[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i][i];
        r[i+1]=i;
    }
    bool vis[n+2][n+2];
    memset(vis,0,sizeof(vis));
    map<int,pair<int,int>>mp;
    for(i=0;i<n;i++)
    {
        vis[i][i]=1;
        mp[i]={i,i};
    }
    set<int>st;
    set<int>:: iterator it;
    for(i=0;i<n;i++)
    {
        st.insert(i);
    }
    while(!st.empty())
    {
        vector<int>temp;
        vector<int>:: iterator it1;
        for(it=st.begin();it!=st.end();it++)
        {
            int x=mp[*it].first;
            int y=mp[*it].second;
            if(r[a[x][y]]==0)
            {
                temp.push_back(*it);
                continue;
            }
            int tol=0;
            if((x-1)>=0&&(x-1)>=y&&vis[x-1][y]==0)
            {
                tol++;
            }
            if((x+1)>=0&&(x+1)>=y&&vis[x+1][y]==0)
            {
                tol++;
            }
            if((y-1)>=0&&(y-1)<x&&vis[x][y-1]==0)
            {
                tol++;
            }
            if((y+1)>=0&&(y+1)<x&&vis[x][y+1]==0)
            {
                tol++;
            }
            if(tol==1)
            {
                if((x-1)>=0&&(x-1)>=y&&vis[x-1][y]==0)
                {
                mp[*it]={x-1,y};
                }
                if((x+1)>=0&&(x+1)>=y&&vis[x+1][y]==0)
                {
                mp[*it]={x+1,y};
                }
                if((y-1)>=0&&(y-1)<x&&vis[x][y-1]==0)
                {
               mp[*it]={x,y-1};
                }
                if((y+1)>=0&&(y+1)<x&&vis[x][y+1]==0)
                {
                mp[*it]={x,y+1};
                }
                r[a[*it][*it]]-=1;
                vis[mp[*it].first][mp[*it].second]=1;
                a[mp[*it].first][mp[*it].second]=a[*it][*it];
            }
        }
        for(it1=temp.begin();it1!=temp.end();it++)
        {
            st.erase(*it1);
        }

    }
}
