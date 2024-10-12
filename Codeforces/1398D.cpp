#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[202][202][202];
int r[202],g[202],b[202];
int func(int x,int y,int z)
{
    if(dp[x][y][z]!=-1)return dp[x][y][z];
    else if(x&&y&&z)
    {
        dp[x][y][z]=max(r[x]*g[y]+func(x-1,y-1,z),max(r[x]*b[z]+func(x-1,y,z-1),b[z]*g[y]+func(x,y-1,z-1)));
    }
    else if(x&&y)
    {
        dp[x][y][z]=r[x]*g[y]+func(x-1,y-1,z);
    }
    else if(x&&z)
    {
        dp[x][y][z]=r[x]*b[z]+func(x-1,y,z-1);
    }
    else if(y&&z)
    {
        dp[x][y][z]=b[z]*g[y]+func(x,y-1,z-1);
    }
    else{
        dp[x][y][z]=0;
    }
    return dp[x][y][z];
}
int main()
{
    int R,G,B,i,j,k;
    cin>>R>>G>>B;
    for(i=1;i<=R;i++)
    {
        cin>>r[i];
    }
    for(i=1;i<=G;i++)
    {
        cin>>g[i];
    }
    for(i=1;i<=B;i++)
    {
        cin>>b[i];
    }
    sort(r+1,r+R+1);
    sort(g+1,g+G+1);
    sort(b+1,b+B+1);
    for(i=0;i<=R;i++)
    {
        for(j=0;j<=G;j++)
        {
            for(k=0;k<=B;k++)
            {
                dp[i][j][k]=-1;
            }
        }
    }
    int ans=func(R,G,B);
    cout<<ans<<endl;
}
