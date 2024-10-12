#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,me;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        set<int>s;
        vector<int>ans;
        me=0;
        for(i=0;i<n;i++)
        {
            mp[a[i]]--;
            s.insert(a[i]);
            while(s.find(me)!=s.end())
            {
                me++;
            }
            if(mp[me]==0)
            {
                ans.push_back(me);
                s.clear();
                me=0;
            }
        }
        cout<<ans.size()<<endl;
        for(i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
