#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<pair<int,int>> v;
        for (i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            int curr = 0;
            for (j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                curr = max(curr, x-(j-1));
            }
            v.push_back(make_pair(curr,k));
        }
        sort(v.begin(), v.end());
        int sum = 0;
        int ans = 0;
        for (i = 0; i < n; ++i)
        {
            ans = max(ans, v[i].first-sum);
            sum += v[i].second;
        }
        cout << ans << endl;
    }
}
