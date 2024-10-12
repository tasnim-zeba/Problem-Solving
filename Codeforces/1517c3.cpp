#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<map>
#include<iterator>
using namespace std;


///defines.....
#define ll              long long
#define lli             long long int
#define pb              push_back
#define mp              make_pair
#define RIP(i,n)        for(int i=0; i<n; i++)
#define F(i,a,b)        for(int i=a; i<b; i++)
#define RIP1(i,n)       for(int i=(n-1); i>=0; i--)
#define FOR(i,a,b)      for(int i=a;i<(b); i++)
#define FOR1(i,a,b)     for(int i=a; i>=(b); i--)
#define sc(a)           scanf("%lld",&a)
#define SC(a)           scanf("%d",&a)
#define cin(a)          cin >> a
#define cout(a)         cout << a
#define pi              acos(-1)
#define pr(a)           printf("%lld\n",a)
#define PR(a)           printf("%lld ",a)
#define s(a,b)          sort(a,b)
#define sz(x)           (int)(x).size()
#define nl              '\n'
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
void F_I_O()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll a[502][502];
void solve()
{
    int n,i,j;
    cin>>n;
    int r[n+1];
    for(i=0;i<n;i++)
    {
         r[i+1]=i;
        cin>>a[i][i];
    }
    bool vis[n+2][n+2];
    memset(vis,0,sizeof(vis));
    map<int,pair<int,int>>mp;
    for(i=0;i<n;i++)
    {
        vis[i][i]=1;
        mp[i]={i,i};
    }
    bool f=1;
    int c=0;
    set<int>st;
    set<int>:: iterator it;
    for(i=0;i<n;i++)
    {
        st.insert(i);
    }
    while(!st.empty())
    {
        f=0;
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
            if((x+1)<n&&(x+1)>=y&&vis[x+1][y]==0)
            {
                tol++;
            }
            if((y-1)>=0&&(y-1)<x&&vis[x][y-1]==0)
            {
                tol++;
            }
            if((y+1)<n&&(y+1)<x&&vis[x][y+1]==0)
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
        for(it1=temp.begin();it1!=temp.end();it1++)
        {
            st.erase(*it1);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
     ios_base::sync_with_stdio(0);
      cin.tie(0);
        solve();
    return 0;
}















/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[502][502];
int main()
{
    int n,i,j;
    cin>>n;
    int r[n+1];
    for(i=0;i<n;i++)
    {
         r[i+1]=i;
        cin>>a[i][i];
    }
    bool vis[n+2][n+2];
    memset(vis,0,sizeof(vis));
    map<int,pair<int,int>>mp;
    for(i=0;i<n;i++)
    {
        vis[i][i]=1;
        mp[i]={i,i};
    }
    bool f=1;
    int c=0;
    set<int>st;
    set<int>:: iterator it;
    for(i=0;i<n;i++)
    {
        st.insert(i);
    }
    while(!st.empty())
    {
        f=0;
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
            if((x+1)<n&&(x+1)>=y&&vis[x+1][y]==0)
            {
                tol++;
            }
            if((y-1)>=0&&(y-1)<x&&vis[x][y-1]==0)
            {
                tol++;
            }
            if((y+1)<n&&(y+1)<x&&vis[x][y+1]==0)
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
        for(it1=temp.begin();it1!=temp.end();it1++)
        {
            st.erase(*it1);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}*/
