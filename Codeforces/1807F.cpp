#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n,m,i,j,i2,j2,d;
bool get()
{
    int x,y;
    if(d==1)
    {
        x=j2-j;
        y=i-i2;
    }
    else if(d==2)
    {
        x=j2-j;
        y=i2-i;
    }
    else if(d==3)
    {
        x=j-j2;
        y=i2-i;
    }
    else
    {
        x=j-j2;
        y=i-i2;
    }
    if(x>=0&&y>=0&&x<m&&y<n&&x==y)return true;
    return false;
}
void nextcordinate()
{
    int x,y;
    if(d==1)
    {
        x=abs(j-m);
        y=abs(i-1);
        i=i-min(x,y);
        j=j+min(x,y);
        if(x==y)
        {
            d=3;
        }
        else if(x<y)
        {
            d=4;
        }
        else
        {
            d=2;
        }
    }
    else if(d==2)
    {
         y=abs(i-n);
         x=abs(j-m);
        i+=min(x,y);
        j+=min(x,y);
        if(x==y)
        {
            d=4;
        }
        else if(x<y)
        {
            d=3;
        }
        else d=1;
    }
    else if(d==3)
    {
         y=abs(i-n);
         x=abs(j-1);
        i+=min(x,y);
        j-=min(x,y);
        if(x==y)
        {
            d=1;
        }
        else if(x<y)
        {
            d=2;
        }
        else d=4;
    }
    else
    {
         y=abs(i-1);
         x=abs(j-1);
        i-=min(x,y);
        j-=min(x,y);
        if(x==y)
        {
            d=2;
        }
        else if(x<y)
        {
            d=1;
        }
        else d=3;

    }
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>i>>j>>i2>>j2;
        map<string,int>mp;
        mp["UR"]=1;
        mp["DR"]=2;
        mp["DL"]=3;
        mp["UL"]=4;
        string dis;
        cin>>dis;
        d=mp[dis];
        queue<pair<pair<int,int>,int>>q;
        q.push({{i,j},d});
        map<vector<int>,int>vis;
        int ans=0;
        while(q.size())
        {
            int x,y,z;
            i=q.front().first.first;
            j=q.front().first.second;
            d=q.front().second;
            q.pop();
            if(get())
            {
                break;
            }
            if(vis[ {i,j,d}])
            {
                ans=-1;
                break;
            }
            vis[ {i,j,d}]=1;
            nextcordinate();
            q.push({{i,j},d});
            ans++;
        }
        cout<<ans<<endl;
    }
}
