#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<char,int>&a,pair<char,int>&b)
{
    if(a.first==b.first)return (a.second>b.second);
    return (a.first<b.first);
}
int main()
{
    int t,i,j;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int n=s.size();
        vector<pair<char,int>>v;
        if(s[0]<=s[n-1])
        {
            for(i=0; i<n; i++)
            {
                if(s[i]>=s[0]&&s[i]<=s[n-1])
                {
                    v.push_back({s[i],i+1});
                }
            }
            sort(v.begin(),v.end());
            cout<<(int)abs(s[n-1]-s[0])<<" "<<v.size()<<endl;
            for(i=0; i<v.size(); i++)
            {
                cout<<v[i].second<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(s[i]>=s[n-1]&&s[i]<=s[0])
                {
                    v.push_back({s[i],i+1});
                }
            }
           sort(v.rbegin(),v.rend(),cmp);
            cout<<(int)abs(s[n-1]-s[0])<<" "<<v.size()<<endl;
            for(i=0; i<v.size(); i++)
            {
                cout<<v[i].second<<" ";
            }
            cout<<endl;
        }

    }
}
