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
        int a[n+1];
        map<int,int>fre;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            fre[a[i]+i]++;
        }
        vector<int>ans;
        while(!fre.empty())
        {
            auto it = fre.rbegin();
            int val=it->first;
            int cnt = it->second;
            ans.push_back(val);
            fre.erase(val);
            cnt--;
            if(cnt>0)
            {
                val--;
                fre[val]+=cnt;
            }

        }
        for(auto ch: ans)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
