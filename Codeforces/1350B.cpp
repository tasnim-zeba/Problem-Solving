#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[100005],i,j,dp[100005],mx,ans,d1,d2;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        for(i=1;i<=n;i++){
            dp[i]=1;
        }
        for(i=2;i<=n;i++){
                mx=0;
            for(j=1;j*j<=i;j++){
                if(i%j==0){
                    d1=j;
                    d2=i/j;
                    if(a[d1]<a[i]){
                        mx=max(mx,dp[d1]);
                    }
                    if(a[d2]<a[i]){
                        mx=max(mx,dp[d2]);
                    }
                }
            }
            dp[i]=dp[i]+mx;
        }
        ans=*max_element(dp+1,dp+n+1);
        printf("%lld\n",ans);
    }
    return 0;
}
