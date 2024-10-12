#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,ans;
    cin>>n;
    vector<vector<int>>v(26);
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        v[s[i]-'a'].push_back(i+1);
    }
    /*for(i=0;i<30;i++)
    {
        cout<<a[i]<<endl;
    }*/
    cin>>m;
    while(m--)
    {
        string s1;
        cin>>s1;
        vector<int>cnt(26);
        ans=INT_MIN;
        for(i=0;i<s1.size();i++)
        {
            cnt[s1[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(cnt[i]>0)
            ans=max(ans,v[i][cnt[i]-1]);
        }
        cout<<ans<<endl;
    }
}
