#include<bits/stdc++.h>
using namespace std;
int k;
long long int pr[100001],dp[100001],M=1e9+7;
int func(int n)
{
	if(n == 0) return dp[n]=1;
	if(dp[n] != -1) return dp[n];
	int ans = 0;
	if(n >= k)
	ans += func(n - k);
	ans = ans % M;
	ans += func(n - 1);
	ans = ans % M;
	return dp[n] = ans;
}
int main()
{
	int t , n , a, b,sum,i;
	cin>>t>>k;
	for(i=1;i<=100000;i++)
	dp[i] = -1;
	for(i=1;i<=100000;i++)
    {
        pr[i] = pr[i-1] + func(i);
        pr[i] = pr[i] % M;
    }
	while(t--)
	{
		cin>>a>>b;
		sum = (pr[b] - pr[a - 1] + M) % M;
		cout<<sum<<endl;
	}
}
