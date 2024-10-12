#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,p,mn,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        map<char,ll>mp;
        for(i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        vector<pair<ll,char>>v;
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        mn=INT_MAX;
        p=0;
        string as[30];
        for(i=0; i<30; i++)
        {
            as[i]=s;
        }
        for(k=1; k<=26; k++)
        {
            if(n%k)continue;
            x=n/k;
            map<char,bool>mp1;
            for(i=v.size()-1; i>=0; i--)
            {
                if(mp1.size()==k)break;
                else
                {
                    mp1[v[i].second]= true;
                }
            }
            if(k>mp1.size())
            {
                for(char c='a'; c<='z'; c++)
                {
                    if(mp1.size()==k)break;
                    if(mp1[c]);
                    else
                    {
                        mp1[c]=true;
                    }
                }
            }
            vector<ll>v1;
            map<char,ll>cnt;
            for(i=0;i<n;i++)
            {
                if(mp1[as[k][i]])
                {
                    if(cnt[as[k][i]]<x)
                    {
                        cnt[as[k][i]]++;
                    }
                    else
                    {
                        v1.push_back(i);
                        cnt[as[k][i]]++;
                    }
                }
                else
                {
                    v1.push_back(i);
                }
            }
            map<char,ll>mp2=mp;
            i=0;
            for(auto it:mp1)
            {
                while(mp2[it.first]<x)
                {
                    as[k][v1[i]]=it.first;
                    i++;
                    mp2[it.first]++;
                }
            }
            cout<<as[k]<<endl;
        }

    }
}
