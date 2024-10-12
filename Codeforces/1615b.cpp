/* Abhay Singh Chauhan */
#include "bits/stdc++.h"

using namespace std;


vector<vector<int>> dp(SZ, vector<int>(33));

void oreo() {
    int l, r;
    cin >> l >> r;
    int ans = inf;
    for(int i = 0; i < 32; i ++) {
        ans = min(ans, (r - l + 1) - (dp[r][i] - dp[l - 1][i]));
    }
    cout<<ans<<endl;
}

int main() {
    for(int i = 0; i < 32; i ++) {
        for(int j = 1; j < SZ; j ++) {
            if ((j >> i) & 1) {
                dp[j][i] = 1;
            }
            dp[j][i] += dp[j - 1][i];
        }
    }
    int t = 1;
    cin >> t;
    while (t--) oreo();
    return 0;
}

/* Thanking Almighty !! The Intellectual Odyssey Rages On */
