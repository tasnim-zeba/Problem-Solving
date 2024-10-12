#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        map<char,int>mp;
        for(i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        if(k==1)
        {
            cout<<s<<endl;
            continue;
        }
        string ans="";
        j=-1;
        for(i=0; i<=k-2; i++)
        {
            if(s[i]!=s[k-1])
            {
                j=i;
                break;
            }
        }
        if(j!=-1)
        {
            cout<<s[k-1]<<endl;
            continue;
        }
        if(mp.size()==1)
        {
            int l=n/k;
            if(n%k)l++;
            while(l--)
            {
                cout<<s[0];
            }
            cout<<endl;
            continue;
        }
        else if(mp.size()==2)
        {
            int x,y;
            auto it=mp.begin();
            x=it->second;
            it++;
            y=it->second;
            it=mp.begin();
            if(x>k)
            {
                for(i=1; i<=x-k+1; i++)
                {
                    cout<<(it->first);
                }
                it++;
                for(i=1; i<=y; i++)
                {
                    cout<<(it->first);
                }
                cout<<endl;
            }
            else
            {
                cout<<(it->first);
                int l=y/k;
                if(y%k)l++;
                it++;
                while(l--)
                {
                    cout<<(it->first);
                }
                cout<<endl;
            }
        }
        else
        {
            for(i=k-1;i<n;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
}
