#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s="";
        for(i=1;i<=n;i++)
        {
            s=s+"BAN";
        }
        if(n==1)
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
        }
        vector<pair<int,int>>v;
        for(i=0,j=s.size()-1;i<j;j=j-3,i=i+3)
        {
            v.push_back({i,j});
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
        }
    }
}

