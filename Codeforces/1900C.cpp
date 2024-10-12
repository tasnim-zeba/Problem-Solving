#include<bits/stdc++.h>
using namespace std;
int lef[300002], righ[300002], ans;
string s;
int func(int v)
{
    ans=INT_MAX;
    if(lef[v]==0&&righ[v]==0)return 0;
    if(s[v-1]=='L')
    {
        if(lef[v]) ans=min(ans,func(lef[v]));
        if(righ[v]) ans=min(ans,func(righ[v])+1);
    }
    else  if(s[v-1]=='R')
    {
        if(lef[v]) ans=min(ans,func(lef[v])+1);
        if(righ[v]) ans=min(ans,func(righ[v]));
    }
    else
    {
        if(lef[v]) ans=min(ans,func(lef[v])+1);
        if(righ[v]) ans=min(ans,func(righ[v])+1);
    }
    return ans;
}
int main()
{
    int t,n,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(i=1;i<=n;i++)
        {
            cin>>lef[i]>>righ[i];
        }
        cout<<func(1)<<endl;
    }
}
