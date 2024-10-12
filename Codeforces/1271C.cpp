#include<bits/stdc++.h>
#define rep(i,s,e) for(int i=s; i<e; ++i)
using namespace std;
int num[4],dir[4][2]= {-1,0,1,0,0,-1,0,1};
int main()
{
    int n,x0,y0;
    cin>>n>>x0>>y0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        num[(x>x0)]++;
        if(x==x0) num[0]--;
        num[(y>y0)+2]++;
        if(y==y0) num[3]--;
    }
    int mx=max(max(num[0],num[1]),max(num[2],num[3]));
    rep(i,0,4) if(mx==num[i]) return cout<<mx<<'\n'<<x0+dir[i][0]<<' '<<y0+dir[i][1]<<'\n',0;
}
