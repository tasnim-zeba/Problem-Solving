#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c;
    string s;
    cin>>s;
    n=s.size();
    vector<pair<char,int>>v;
    for(i=0; i<n;)
    {
        c=1;
        char ch=s[i];
        while(s[i]==s[i+1])
        {
            c++;
            i++;
            if(i==n-1)
            {
                break;
            }
        }
        v.push_back({ch,c});
        i++;
        if(i==n-1)
        {
            v.push_back({s[i],1});
            break;
        }
    }
    string ans="";
    for(i=0; i<v.size(); i++)
    {
        ///cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[i].second<2)
        {
            ans+=v[i].first;
        }
        else if(v[i].second>=2)
        {
            if(i)
            {
                if(v[i-1].second==2)
                {
                    ans+=v[i].first;
                    v[i].second=1;
                }
                else
                {
                    ans+=v[i].first;
                    ans+=v[i].first;
                    v[i].second=2;
                }
            }
            else
            {
                ans+=v[i].first;
                ans+=v[i].first;
                v[i].second=2;
            }
        }
    }
    cout<<ans<<endl;
}
