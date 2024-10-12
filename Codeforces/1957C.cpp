#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const M= 1e9+7;
int findMoves(int n, vector<int> &dp)
{
    if(n<=1)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n] = (findMoves(n-1, dp) + ((((n-1LL)%M) * findMoves(n-2, dp))%M * 2LL)%M)%M;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        set<int>st;
        while(k--)
        {
            int r, c;
            cin>>r>>c;
            st.insert(r);
            st.insert(c);
        }
        n=n-st.size();
        vector<int>dp(n+1, -1);
        int ans = findMoves(n, dp);
        cout<<ans<<endl;
    }
}
