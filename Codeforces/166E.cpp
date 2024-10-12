#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,ans;
    cin>>n;
    long long dp[2][n+1];
    dp[0][0]=0;
    dp[1][0]=1;
    for(i=1;i<=n;i++){
        dp[1][i]=3*dp[0][i-1]%1000000007;
        dp[0][i]=(2*dp[0][i-1]+dp[1][i-1])%1000000007;
    }
    ans=dp[1][n];
    cout<<ans<<endl;
}
