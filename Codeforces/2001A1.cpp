#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=1, x; i<=n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        int mx = 0;
        for(auto ch: mp)
        {
            mx = max(mx, ch.second);
        }
        cout<<n-mx<<endl;
    }
}
