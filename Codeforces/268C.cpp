#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x,y;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for(i=0,j=m;i<=n&&j>=0;i++,j--)
    {
        v.push_back({i,j});
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
