#include<bits/stdc++.h>
using namespace std;
int const M=1e9+7,N=2e5+5;
int dp[N][65][2],n,k;
vector<int>a;
int func(int index,int an,int emp)
{
    if(index==n)
    {
        if(emp==1)return 0;
        else if(__builtin_popcount(an)==k) return 1;
        else return 0;
    }
    if(dp[index][an][emp]!=-1)return dp[index][an][emp];
    int x,y;
    if(emp)
    {
        x=func(index+1,a[index],0);
    }
    else{
        x=func(index+1,an&a[index],0);
    }
    y=func(index+1,an,emp);
    dp[index][an][emp]=(x+y)%M;
    return dp[index][an][emp];
}
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        a.resize(n);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<=63;j++)
            {
                dp[i][j][0]=dp[i][j][1]=-1;
            }
        }
        cout<<func(0,0,1)<<endl;
    }
}
