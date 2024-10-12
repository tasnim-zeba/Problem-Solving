#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        vector<int>v;
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        sort(v.begin(),v.end(),greater<>());

        int g=v[0];
        ll s=g;
        g--;
        for(i=1;i<v.size();i++)
        {
            if(g==0)break;
            if(g>=v[i])
            {
                g=v[i];
                s+=g;
                g--;
                if(g==0)break;
            }
            else
            {
                s+=g;
                g--;
                if(g==0)break;
            }
        }
        cout<<s<<endl;
    }
}
