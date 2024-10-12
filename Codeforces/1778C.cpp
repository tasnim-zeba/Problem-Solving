#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string a,b,c;
ll ans;
ll cal(string x,string y)
{
    int n=x.size();
    ll res=0,cons=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]==y[i])
        {
            cons++;
            if(i==n-1||x[i+1]!=y[i+1])
            {
                res+=(cons*(cons+1))/2;
                cons=0;
            }
        }
    }
    return res;
}
void func(int index,set<char>dc,int k)
{
    if(index==c.size())
    {
        if(dc.size()>k)return;
        string x,y;
        x=a,y=b;
        int n=x.size();
        for(int i=0;i<n;i++)
        {
            if(x[i]!=y[i]&&dc.count(x[i]))
            {
                x[i]=y[i];
            }
        }
        ans=max(ans,cal(x,y));
        return;
    }
    set<char>ss;
    ss=dc;
    func(index+1,ss,k);
    ss.insert(c[index]);
    func(index+1,ss,k);
}

int main()
{
    fio
    int t,n,k,i,j,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>a>>b;
        ans=0;
        c.erase();
        c="";
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                c.push_back(a[i]);
            }
        }
        sort(c.begin(),c.end());
        c.erase(unique(c.begin(),c.end()),c.end());
        set<char>ss;
        func(0,ss,k);
        cout<<ans<<endl;
    }
}
