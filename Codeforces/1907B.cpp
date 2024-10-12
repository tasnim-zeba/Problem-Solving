#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<pair<int,char>>lw,up;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                if(s[i]=='b')
                {
                    if(lw.size())
                    {
                        lw.pop();
                    }
                }
                else
                {
                    lw.push({i,s[i]});
                }
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                if(s[i]=='B')
                {
                    if(up.size())
                    {
                        up.pop();
                    }
                }
                else
                {
                    up.push({i,s[i]});
                }
            }
        }
        vector<pair<int,char>>v;
        while(lw.size())
        {
            v.push_back(lw.top());
            lw.pop();
        }
        while(up.size())
        {
            v.push_back(up.top());
            up.pop();
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i].second;
        }
        cout<<endl;
    }
}

